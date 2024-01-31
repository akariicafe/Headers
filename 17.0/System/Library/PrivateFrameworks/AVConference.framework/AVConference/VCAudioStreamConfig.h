@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface VCAudioStreamConfig : VCMediaStreamConfig {
    NSMutableOrderedSet *_supportedNumRedundantPayload;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _externalIOFormat;
}

@property (nonatomic) long long audioStreamMode;
@property (readonly, nonatomic) NSMutableDictionary *codecConfigurations;
@property (readonly, nonatomic, getter=isRedEnabled) BOOL redEnabled;
@property (nonatomic) unsigned char numRedundantPayloads;
@property (readonly, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) BOOL forceEVSWideBand;
@property (nonatomic) float volume;
@property (nonatomic) BOOL shouldApplyRedAsBoolean;
@property (nonatomic) BOOL supportsAdaptation;
@property (nonatomic) int bundlingScheme;
@property (readonly, nonatomic) BOOL useExternalIO;
@property (nonatomic) BOOL useWifiTiers;
@property (nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *externalIOFormat;
@property (nonatomic) int oneToOneOperatingMode;
@property (nonatomic) unsigned int channelCount;
@property (nonatomic) BOOL dtmfTonePlaybackEnabled;
@property (nonatomic) unsigned int dtmfSampleRate;
@property (nonatomic) BOOL anbrEnabled;
@property (nonatomic) long long subscriptionSlot;
@property (nonatomic) BOOL isLowLatency;
@property (nonatomic) unsigned int preferredMediaBitRate;

+ (int)bundlingSchemeForAudioStreamMode:(long long)a0 payloadType:(int)a1;

- (id)init;
- (void)dealloc;
- (BOOL)setupCodecWithClientDictionary:(id)a0;
- (void)addCodecConfiguration:(id)a0;
- (void)addSupportedNumRedundantPayload:(unsigned int)a0;
- (id)initWithClientDictionary:(id)a0;
- (BOOL)setupCNCodecWithClientDictionary:(id)a0;
- (BOOL)setupDTMFCodecWithClientDictionary:(id)a0;
- (void)setupRedWithRxPayload:(unsigned int)a0 txPayload:(unsigned int)a1;

@end
