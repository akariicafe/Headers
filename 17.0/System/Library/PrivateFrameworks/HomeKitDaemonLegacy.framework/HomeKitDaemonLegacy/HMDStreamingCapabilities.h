@class NSDictionary, NSSet;

@interface HMDStreamingCapabilities : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *supportedAudioCodecs;
@property (readonly, nonatomic) NSSet *supportedVideoCodecs;
@property (readonly, nonatomic) NSSet *supportedVideoResolutions;
@property (readonly, nonatomic) NSSet *supportedH264Profiles;
@property (readonly, nonatomic) NSSet *supportedH264Levels;
@property (readonly, nonatomic) NSSet *supportedPacketizationModes;
@property (readonly, nonatomic) NSSet *supportedBitRateSettings;
@property (readonly, nonatomic) NSSet *supportedAudioSampleRates;
@property (nonatomic) unsigned long long streamingTierType;
@property (nonatomic) BOOL supportsComfortNoise;

+ (unsigned long long)aspectRatioOfResolution:(id)a0;
+ (void)translateCapabilities:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_supportedResolutionsWithOverrides;
- (void)_updateWithStreamPreference:(id)a0;
- (id)initWithStreamPreference:(id)a0;
- (void)updateWithRemoteSettings:(id)a0;

@end
