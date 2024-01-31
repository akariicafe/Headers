@class NSString, VCAudioIO, VCMediaRecorderConfiguration;

@interface VCMediaRecorderLocal : VCMediaRecorder <VCVideoSink, VCVideoCaptureClient> {
    VCMediaRecorderConfiguration *_configuration;
    VCAudioIO *_audioIO;
    unsigned int _audioSessionId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)avConferencePreviewError:(id)a0;
- (void)cameraAvailabilityDidChange:(BOOL)a0;
- (void)cleanupSpatialAudio;
- (id)clientCaptureRule;
- (BOOL)configureVideoRecording;
- (struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; unsigned int x9; unsigned int x10; BOOL x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; BOOL x17; BOOL x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; id x3; long long x4; id x5; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; id x3; long long x4; id x5; } x20; })defaultAudioIOConfig;
- (void)deregisterForCameraCapture;
- (id)initWithStreamToken:(long long)a0 configuration:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2;
- (BOOL)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; })a2;
- (void)reactionDidStart:(id)a0;
- (BOOL)registerForCameraCapture;
- (void)setupSpatialAudio;
- (void)sourceFrameRateDidChange:(unsigned int)a0;
- (BOOL)startAudio;
- (int)supportedVideoCodec;
- (void)thermalLevelDidChange:(int)a0;

@end
