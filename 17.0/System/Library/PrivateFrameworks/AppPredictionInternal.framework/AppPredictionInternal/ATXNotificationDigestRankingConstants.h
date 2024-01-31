@class NSDictionary;

@interface ATXNotificationDigestRankingConstants : NSObject {
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) double weightForMarqueeAppearance;
@property (readonly, nonatomic) double weightForMarqueeEngagement;
@property (readonly, nonatomic) double weightForNonMarqueeAppearance;
@property (readonly, nonatomic) double weightForNonMarqueeEngagement;
@property (readonly, nonatomic) double weightForBasicNotificationsSent;
@property (readonly, nonatomic) double weightForTimeSensitiveNotificationsSent;
@property (readonly, nonatomic) double logisticCenterXVal;
@property (readonly, nonatomic) double logisticGrowthRate;
@property (readonly, nonatomic) double minMarqueeAppearancesPerApp;
@property (readonly, nonatomic) double giveMarqueeToNonAppearingAppProbability;
@property (readonly, nonatomic) unsigned long long numMarqueeSpots;
@property (readonly, nonatomic) double dailyDecayFactor;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
