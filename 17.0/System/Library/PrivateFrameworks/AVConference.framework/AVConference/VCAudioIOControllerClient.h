@class NSObject;
@protocol VCAudioIOControllerDelegate, OS_dispatch_semaphore;

@interface VCAudioIOControllerClient : NSObject {
    id _delegate;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _clientFormat;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _controllerFormat;
    struct _VCAudioIOControllerClientIO { void *processSamplesContext; void /* function */ *processSamples; NSObject<OS_dispatch_semaphore> *runLock; unsigned int audioSessionId; unsigned int channelIndex; unsigned int channelCount; struct opaqueVCAudioBufferList *controllerAudioBuffer; BOOL isVoiceActivityEnabled; BOOL isMediaPriorityEnabled; } _sinkIO;
    struct _VCAudioIOControllerClientIO { void *processSamplesContext; void /* function */ *processSamples; NSObject<OS_dispatch_semaphore> *runLock; unsigned int audioSessionId; unsigned int channelIndex; unsigned int channelCount; struct opaqueVCAudioBufferList *controllerAudioBuffer; BOOL isVoiceActivityEnabled; BOOL isMediaPriorityEnabled; } _sourceIO;
}

@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) id<VCAudioIOControllerDelegate> delegate;
@property (readonly, nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *clientFormat;
@property (nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *controllerFormat;
@property (nonatomic) int deviceRole;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) int operatingMode;
@property (nonatomic) unsigned char direction;
@property (readonly, nonatomic) BOOL isRemoteCodecInfoValid;
@property (readonly, nonatomic) unsigned int remoteCodecType;
@property (readonly, nonatomic) double remoteCodecSampleRate;
@property (readonly, nonatomic) BOOL isRemoteVersionInfoValid;
@property (readonly, nonatomic) struct VoiceIOFarEndVersionInfo { unsigned char farEndHwModel[64]; unsigned char farEndOSVersion[64]; unsigned int farEndAUVersion; } farEndVersionInfo;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic, getter=isOuputMeteringEnabled) BOOL outputMeteringEnabled;
@property (readonly, nonatomic) struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; BOOL x7; BOOL x8; } *sinkIO;
@property (readonly, nonatomic) struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; BOOL x7; BOOL x8; } *sourceIO;
@property (readonly, nonatomic) unsigned int audioSessionId;
@property (readonly, nonatomic) BOOL isPrewarmingClient;
@property (nonatomic) BOOL spatialAudioDisabled;
@property (nonatomic) unsigned int channelIndex;
@property (readonly, nonatomic) unsigned long long spatialToken;
@property (nonatomic) BOOL isVoiceActivityEnabled;
@property (nonatomic) BOOL isMediaPriorityEnabled;

- (void)dealloc;
- (id)description;
- (id)initWithDelegate:(id)a0 audioSessionId:(unsigned int)a1 channelIndex:(unsigned int)a2 sourceContext:(void *)a3 sourceProcess:(void /* function */ *)a4 sinkContext:(void *)a5 sinkProcess:(void /* function */ *)a6 clientPid:(int)a7 isPrewarmingClient:(BOOL)a8 spatialToken:(unsigned long long)a9 isVoiceActivityEnabled:(BOOL)a10 isMediaPriorityEnabled:(BOOL)a11;
- (void)setClientFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; })a0;
- (void)setRemoteCodecType:(unsigned int)a0 sampleRate:(double)a1;

@end
