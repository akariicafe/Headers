@class NSString;

@interface VCAudioPowerSpectrum : NSObject <VCAudioPowerSpectrumProtocol> {
    struct _VCAudioPowerSpectrumRealtimeContext { BOOL powerSpectrumConfigured; struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; struct _VCRange { float min; float max; } frequencyRange; unsigned int sampleRate; unsigned int fftSampleCount; float *hanningWindow; unsigned int *octave2IndexTable6; unsigned int octave2IndexTable6Count; unsigned int outputBinCount; float *lerpIdxs; float fftNormFactor; long long streamToken; float averageLevel; struct opaqueVCAudioBufferList *sampleBuffer; struct _VCAudioPowerSpectrumChannel *channels; void *sinkContext; void /* function */ *sinkCallback; } _realtimeContext;
}

@property (readonly, nonatomic) struct _VCRange { float x0; float x1; } frequencyRange;
@property (readonly, nonatomic) long long streamToken;
@property (readonly, nonatomic) void *realtimeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithBinCount:(unsigned int)a0 streamToken:(long long)a1 sinkContext:(void *)a2 sinkCallback:(void /* function */ *)a3;

@end
