@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, VCServerDelegate;

@interface VCCellularAudioTap : NSObject <VCAudioIODelegate, VCAudioPowerSpectrumSourceDelegate> {
    NSMutableDictionary *_audioTapIOMap;
    NSObject<OS_dispatch_queue> *_stateQueue;
    int _processId;
    long long _audioSessionId;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id<VCServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)audioIOTypeFromTapType:(unsigned int)a0;

- (void)dealloc;
- (void)invalidate;
- (void)didStart:(BOOL)a0 error:(id)a1;
- (BOOL)addAudioTapForStreamToken:(long long)a0 tapType:(unsigned int)a1 error:(id *)a2;
- (struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; unsigned int x9; unsigned int x10; BOOL x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; BOOL x17; BOOL x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; id x3; long long x4; id x5; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; id x3; long long x4; id x5; } x20; })audioIOConfigWithAudioType:(unsigned int)a0 realtimeContext:(void *)a1;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)didResume;
- (void)didResumeAudioIO:(id)a0;
- (void)didStop:(BOOL)a0 error:(id)a1;
- (void)didSuspend;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)initWithProcessId:(int)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (int)registerAudioTapForStreamToken:(long long)a0 tapType:(unsigned int)a1;
- (BOOL)removeAudioTapForStreamToken:(long long)a0 error:(id *)a1;
- (void)serverDidDie;
- (void)unregisterAudioTapForStreamToken:(long long)a0;

@end
