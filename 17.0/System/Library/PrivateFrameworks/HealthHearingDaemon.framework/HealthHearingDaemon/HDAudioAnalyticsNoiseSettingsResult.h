@class NSNumber;

@interface HDAudioAnalyticsNoiseSettingsResult : NSObject

@property (nonatomic) BOOL hasWatchPairedWithNoiseApp;
@property (nonatomic) BOOL hasNoiseEnabled;
@property (nonatomic) BOOL hasNoiseNotificationsEnabled;
@property (readonly, nonatomic) NSNumber *noiseThreshold;

- (void).cxx_destruct;
- (id)initWithWatchPairedWithNoiseApp:(BOOL)a0 hasNoiseEnabled:(BOOL)a1 hasNoiseNotificationsEnabled:(BOOL)a2 noiseThreshold:(id)a3;

@end
