@class VCAudioStreamGroupCommon, VCSystemAudioCaptureSession, AVCBasebandCongestionDetector;

@interface VCAudioStreamSendGroup : VCMediaStreamSendGroup <VCRedundancyControllerDelegate, VCAudioStreamGroup> {
    BOOL _lastEnqueuedStreamUpdateEventWasEmpty;
    struct opaqueCMSimpleQueue { } *_audioStreamUpdateEventQueue;
    struct opaqueCMSimpleQueue { } *_audioRedundancyChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_audioStreamUpdatePool;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_audioRedundancyEventPool;
    struct tagVCMediaQueue { } *_mediaQueue;
    unsigned char _lastAudioPriority;
    BOOL _forcedAudioPriorityEnabled;
    unsigned char _forcedAudioPriorityValue;
    double _forcedAudioPriorityLastUpdateTime;
    struct opaqueVCVoiceDetector { } *_voiceDetector;
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;
    struct tagVCAudioDucker { } *_audioDucker;
    BOOL _shouldScheduleMediaQueue;
    float _averageInputPower;
    BOOL _audioControllerSupportsVoiceActivityDetection;
}

@property (readonly) VCAudioStreamGroupCommon *common;
@property (nonatomic, setter=setVADFilteringEnabled:) BOOL isVADFilteringEnabled;
@property (nonatomic, setter=setCurrentDTXEnabled:) BOOL isCurrentDTXEnabled;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) unsigned int cellularUniqueTag;
@property (nonatomic, setter=setMuted:) BOOL isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (setter=setPowerSpectrumEnabled:) BOOL isPowerSpectrumEnabled;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (id)stopCapture;
- (id)startCapture;
- (void)didStop;
- (id)checkStreamsForAdditionalOptIn:(id)a0;
- (id)activeStreamKeys;
- (BOOL)addSyncDestination:(id)a0;
- (void)cleanupIOEventQueues;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (BOOL)configureAudioStreams:(id)a0 deviceRole:(int)a1 operatingMode:(int)a2;
- (BOOL)configureStreams;
- (BOOL)createIOEventQueues;
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned char x0 : 5; unsigned char x1 : 1; unsigned char x2 : 2; unsigned char x3 : 8; unsigned short x4; } x0; union { struct tagSR_RTCP { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x6[1]; } x0; struct tagRR_RTCP { unsigned int x0; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x1[1]; } x1; struct tagSDES_RTCP { unsigned int x0; struct tagRTCPSDES { unsigned char x0; unsigned char x1; char x2[258]; } x1; } x2; struct tagBYE_RTCP { unsigned int x0; } x3; struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x4; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x5; struct tagFIR_RTCP { unsigned int x0; unsigned short x1[10]; } x6; struct tagNACK_RTCP { unsigned int x0; unsigned short x1; unsigned short x2; } x7; struct tagRTCP_PSFB_PLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; } x8; struct tagRTCP_PSFB_SLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x9; struct tagRTCP_PSFB_FIR { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned char x2; unsigned char x3[3]; } x10; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x11; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x12; struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x13; struct tagRTCP_PSFB_LOSSFB { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_PSFB_LOSS_FB_INFO { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x1; } x14; struct tagRTCP_PSFB_LTRACK { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; } x15; struct tagRTCP_RTPFB_GNACK { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_RTPFB_INDIVIDUAL_GNACK { unsigned short x0; unsigned short x1; } x1[256]; } x16; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x17; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x18; struct tagVCRTCPXR { unsigned int x0; unsigned int x1[0]; } x19; struct tagRTCP_CUSTOM_SR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_SENDER_INFO { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 4; unsigned char x5 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x20; struct tagRTCP_CUSTOM_RR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_RECEIVER_INFO { unsigned char x0 : 4; unsigned char x1 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x21; struct tagRTCP_CUSTOM_RCTL { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO { unsigned char x0[20]; } x1; } x22; } x1; } *)a0 arrivalNTPTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (void)didReceiveReportPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned char x0 : 5; unsigned char x1 : 1; unsigned char x2 : 2; unsigned char x3 : 8; unsigned short x4; } x0; union { struct tagSR_RTCP { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x6[1]; } x0; struct tagRR_RTCP { unsigned int x0; struct tagRTCP_RRB { unsigned int x0; unsigned char x1 : 8; unsigned int x2 : 24; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } x1[1]; } x1; struct tagSDES_RTCP { unsigned int x0; struct tagRTCPSDES { unsigned char x0; unsigned char x1; char x2[258]; } x1; } x2; struct tagBYE_RTCP { unsigned int x0; } x3; struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x4; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x5; struct tagFIR_RTCP { unsigned int x0; unsigned short x1[10]; } x6; struct tagNACK_RTCP { unsigned int x0; unsigned short x1; unsigned short x2; } x7; struct tagRTCP_PSFB_PLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; } x8; struct tagRTCP_PSFB_SLI { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x9; struct tagRTCP_PSFB_FIR { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned char x2; unsigned char x3[3]; } x10; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x11; struct tagRTCP_PSFB_TST { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x12; struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x13; struct tagRTCP_PSFB_LOSSFB { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_PSFB_LOSS_FB_INFO { unsigned int x0; unsigned short x1; unsigned char x2; unsigned char x3; } x1; } x14; struct tagRTCP_PSFB_LTRACK { struct tagRTCP_PSFB_ALFB_HEADER { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; } x0; unsigned int x1; } x15; struct tagRTCP_RTPFB_GNACK { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_RTPFB_INDIVIDUAL_GNACK { unsigned short x0; unsigned short x1; } x1[256]; } x16; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x17; struct tagRTCP_RTPFB_TMMB { struct tagRTCP_FBCOMMON { unsigned int x0; unsigned int x1; } x0; unsigned int x1; unsigned int x2; } x18; struct tagVCRTCPXR { unsigned int x0; unsigned int x1[0]; } x19; struct tagRTCP_CUSTOM_SR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_SENDER_INFO { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4 : 4; unsigned char x5 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x20; struct tagRTCP_CUSTOM_RR { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; unsigned int x1; struct tagRTCP_CUSTOM_RECEIVER_INFO { unsigned char x0 : 4; unsigned char x1 : 4; } x2; struct tagRTCP_CUSTOM_RECEPTION_REPORT { unsigned int x0; unsigned char x1 : 4; unsigned short x2 : 12; unsigned short x3; unsigned short x4; unsigned char x5; unsigned char x6; } x3[1]; } x21; struct tagRTCP_CUSTOM_RCTL { struct tagRTCP_APP { unsigned int x0; unsigned int x1; } x0; struct tagRTCP_CUSTOM_RATE_CONTROL_INFO { unsigned char x0[20]; } x1; } x22; } x1; } *)a0 arrivalNTPTime:(union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; })a1;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)a0 withTargetBitrate:(unsigned int)a1 mediaBitrates:(id)a2 rateChangeCounter:(unsigned int)a3;
- (void)flushAudioEventQueue;
- (void)flushAudioRedundancyEventQueue;
- (void)redundancyController:(id)a0 redundancyIntervalDidChange:(double)a1;
- (void)redundancyController:(id)a0 redundancyPercentageDidChange:(unsigned int)a1;
- (void)redundancyController:(id)a0 redundancyVectorDidChange:(struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[32]; })a1;
- (BOOL)removeSyncDestination:(id)a0;
- (BOOL)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)setMuteOnStreams;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (id)setupRedundancyControllerForMode:(unsigned int)a0;
- (BOOL)setupStreamGroupWithConfig:(id)a0;
- (void)startDynamicDucker;
- (void)startVoiceActivityDetection;
- (void)stopDynamicDucker;
- (void)stopVoiceActivityDetection;
- (void)updateActiveVoiceOnly:(BOOL)a0;
- (void)updateVoiceActivityEnabled:(BOOL)a0 isMediaPriorityEnabled:(BOOL)a1;
- (id)willStart;

@end
