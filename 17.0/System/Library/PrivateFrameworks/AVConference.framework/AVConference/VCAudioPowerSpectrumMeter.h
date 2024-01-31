@class NSString, powerSpectrumMeterDelegateContext;

@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumProtocol> {
    unsigned short _audioSpectrumBinCount;
    struct _VCAudioPowerSpectrumMeterRealtimeContext { struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } streams; struct opaqueCMSimpleQueue *eventQueue; double nextDeliveryTime; double audioSpectrumRefreshRate; struct atomic_flag { _Atomic BOOL _Value; } isProcessingOutput; double nextHeatlhPrintTime; struct __CFDictionary *outputPowerSpectrums; powerSpectrumMeterDelegateContext *powerSpectrumMeterDelegate; void *x0; } _realtimeContext;
}

@property (readonly, nonatomic) void *realtimeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBinCount:(unsigned short)a0 refreshRate:(double)a1 delegate:(id)a2;
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)a0 powerSpectrumKey:(id)a1 spectrumSource:(id)a2;
- (void)releaseAudioPowerSpectrumForStreamToken:(id)a0;
- (void)unregisterAllStreams;

@end
