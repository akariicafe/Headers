@class SBFTodayGestureSettings;

@interface SBFTodayGestureDomain : PTDomain

@property (class, readonly, nonatomic) SBFTodayGestureSettings *rootSettings;

+ (id)domainGroupName;
+ (Class)rootSettingsClass;
+ (id)domainName;

@end
