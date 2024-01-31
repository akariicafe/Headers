@class NSArray;

@interface AVAudioSessionSpatialPreferences : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL prefersHeadTrackedSpatialization;
@property (nonatomic) BOOL prefersLossyAudioSources;
@property (nonatomic) BOOL alwaysSpatialize;
@property (nonatomic) long long maximumSpatializableChannels;
@property (retain, nonatomic) NSArray *spatialAudioSources;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
