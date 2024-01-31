@class NSArray, VCMediaNegotiatorAudioConfiguration, NSMutableSet, NSDictionary, VCVideoRuleCollections;

@interface AVCMediaStreamNegotiatorSettings : NSObject

@property (readonly, nonatomic) VCVideoRuleCollections *screenRuleCollections;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (readonly, nonatomic) long long tilesPerFrame;
@property (readonly, nonatomic) long long videoStreamMode;
@property (readonly, nonatomic) long long audioStreamMode;
@property (readonly, nonatomic) long long captureSource;
@property (readonly, nonatomic) int operatingMode;
@property (readonly, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration;
@property (readonly, nonatomic) int preferredAudioCodec;
@property (readonly, nonatomic) unsigned int localSSRC;
@property (readonly, nonatomic) NSArray *hdrModePixelFormats;
@property (readonly, nonatomic) NSMutableSet *hdrModesSupported;
@property (readonly, nonatomic) unsigned long long ptime;
@property (readonly, nonatomic) unsigned long long minBandwidth;
@property (readonly, nonatomic) unsigned long long maxBandwidth;
@property (nonatomic) long long accessNetworkType;
@property (readonly, nonatomic) long long mediaStreamDirection;
@property (readonly, nonatomic) BOOL rtcpTimeOutEnabled;
@property (readonly, nonatomic) double rtcpTimeOutInterval;
@property (readonly, nonatomic) double rtcpSendInterval;
@property (readonly, nonatomic) unsigned int jitterBufferMode;
@property (readonly, nonatomic) BOOL shouldSetJitterBufferMode;
@property (readonly, nonatomic) unsigned long long audioChannelCount;
@property (readonly, nonatomic) unsigned long long preferredMediaBitRate;
@property (readonly, nonatomic) unsigned char featureListStringType;
@property (readonly, nonatomic) NSDictionary *featureListString;
@property (readonly, nonatomic) int connectionType;
@property (readonly, nonatomic) BOOL shouldApply16AlignedAdjustment;

+ (unsigned long long)hdrModeWithNegotiatorInitOptions:(id)a0;
+ (id)negotiatorSettingsForMode:(long long)a0 deviceRole:(unsigned char)a1 options:(id)a2 errorString:(id *)a3;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
