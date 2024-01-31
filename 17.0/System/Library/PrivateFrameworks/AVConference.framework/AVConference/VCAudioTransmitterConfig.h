@class AVCStatisticsCollector, NSArray, VCTransportSession, NSMutableArray, VCAudioPayload;

@interface VCAudioTransmitterConfig : NSObject {
    BOOL _shouldUseRedAsBoolean;
}

@property (nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (nonatomic) struct tagHANDLE { int x0; } *afrcHandle;
@property (nonatomic) struct tagHANDLE { int x0; } *mediaQueue;
@property (nonatomic) struct tagHANDLE { int x0; } *rtpVideo;
@property (nonatomic) void *controlInfoGenerator;
@property (retain, nonatomic) NSMutableArray *audioPayloads;
@property (retain, nonatomic) VCAudioPayload *chosenAudioPayload;
@property (retain, nonatomic) VCAudioPayload *chosenDTXPayload;
@property (nonatomic) unsigned char packetsPerBundle;
@property (nonatomic) BOOL useRateControl;
@property (nonatomic) int bundlingScheme;
@property (nonatomic) BOOL isUseCaseWatchContinuity;
@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL supportsAdaptation;
@property (nonatomic) BOOL needsPacketThread;
@property (nonatomic) int chosenRedPayloadType;
@property (nonatomic, getter=isRedEnabled) BOOL redEnabled;
@property (nonatomic) BOOL includeRedSequenceOffset;
@property (nonatomic) unsigned int redNumPayloads;
@property (nonatomic) unsigned int redMaxDelay20ms;
@property (nonatomic) BOOL transmitROC;
@property (nonatomic) int operatingMode;
@property (retain, nonatomic) VCTransportSession *transportSession;
@property (nonatomic) struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } inputFormat;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;
@property (nonatomic) int reportingParentID;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) BOOL ignoreSilence;
@property (nonatomic) int ratType;
@property (retain, nonatomic) NSArray *streamIDs;
@property (nonatomic) unsigned int tierNetworkBitrate;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (retain, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) BOOL sendActiveVoiceOnly;
@property (nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic) BOOL alwaysOnAudioRedundancyEnabled;
@property (nonatomic) BOOL cellularAllowRedLowBitratesEnabled;
@property (nonatomic) BOOL wifiAllowRedLowBitratesEnabled;
@property (nonatomic) unsigned long long remoteIDSParticipantID;
@property (nonatomic) BOOL shouldCreateRedundancyController;
@property (nonatomic) BOOL useChannelDataFormat;
@property (nonatomic) BOOL shouldApplyRedAsBoolean;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) BOOL useWifiTiers;
@property (nonatomic) BOOL supportsCodecBandwidthUpdate;
@property (nonatomic) struct tagVCCryptor { } *sframeCryptor;
@property (nonatomic) unsigned int packetExpirationTime;
@property (nonatomic) BOOL audioIssueDetectorEnabled;
@property (nonatomic) BOOL targetBitrateIsAudioOnly;
@property (nonatomic) BOOL audioDumpEnabled;
@property (nonatomic) unsigned char tierPickerMode;
@property (nonatomic) BOOL ramStadSRCEnabled;
@property (nonatomic) unsigned int maxAudioPacketSize;
@property (nonatomic) unsigned int constantTransportOverhead;

- (void)dealloc;
- (id)description;

@end
