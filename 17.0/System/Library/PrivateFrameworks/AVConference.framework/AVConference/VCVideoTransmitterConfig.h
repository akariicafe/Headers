@class AVCStatisticsCollector, NSDictionary, NSMutableDictionary, VCRateControlMediaController, NSString;

@interface VCVideoTransmitterConfig : NSObject

@property (nonatomic) long long videoResolution;
@property (nonatomic) int videoSource;
@property (nonatomic) long long codecType;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) BOOL enableCVO;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) BOOL isIPv6;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;
@property (nonatomic) int reportingParentID;
@property (nonatomic) int videoPayload;
@property (nonatomic) int encodingMode;
@property (nonatomic) int encoderUsage;
@property (nonatomic) NSDictionary *colorInfo;
@property (nonatomic) _Atomic unsigned char *videoPriorityPointer;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) int mode;
@property (nonatomic) int captureSource;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (readonly, nonatomic) struct tagVCVideoTransmitterStreamConfig { struct tagHANDLE *x0; unsigned short x1; int x2; unsigned int x3; struct tagVCCryptor *x4; } *streamConfigs;
@property (nonatomic) int streamCount;
@property (nonatomic) int tilesPerFrame;
@property (nonatomic) BOOL useRateControl;
@property (nonatomic) BOOL setupBWEstimationOptionWithFeatureString;
@property (nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) NSMutableDictionary *customFeatureListStrings;
@property (nonatomic) BOOL reinitEncoderOnFrameSizeChangeEnabled;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) BOOL isFecGeneratorEnabled;
@property (nonatomic) BOOL fecHeaderV1Enabled;
@property (nonatomic) unsigned long long remoteIDSParticipantID;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic) void *mediaControlInfoGenerator;
@property (nonatomic) unsigned int rtpTimestampRate;
@property (retain, nonatomic) NSString *profileLevel;
@property (nonatomic) unsigned int parameterSets;
@property (nonatomic) BOOL temporalScalingEnabled;
@property (nonatomic) unsigned int maxSupportedTemporalLayers;
@property (nonatomic) struct tagVCCryptor { } *sframeCryptor;
@property (nonatomic) BOOL useInBandFec;
@property (nonatomic) int reportingClientType;
@property (nonatomic) unsigned long long maxEncoderPixels;
@property (nonatomic) unsigned int encoderBitrateAveragingInterval;
@property (nonatomic) int ltrAckFeedbackType;
@property (nonatomic) BOOL fecEnabled;
@property (nonatomic) BOOL rtxEnabled;
@property (nonatomic) int accessNetworkType;
@property (nonatomic) double minKeyFrameGenerationIntervalInSeconds;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addCustomFeatureListString:(id)a0 payload:(int)a1;

@end
