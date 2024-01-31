@interface WBSAutomaticTabClosingUtilities : NSObject

@property (class, readonly, nonatomic) BOOL shouldCloseTabsAutomaticallyWhenEnteringForeground;
@property (class, readonly, nonatomic) BOOL userHasPreferenceForAutomaticTabClosingInterval;
@property (class, nonatomic) unsigned long long automaticTabClosingInterval;

+ (void)clearMostDistantLastViewedTime;
+ (void)resetAutomaticTabClosingIntervalPreference;
+ (void)setMostDistantLastViewedTime:(double)a0;

@end
