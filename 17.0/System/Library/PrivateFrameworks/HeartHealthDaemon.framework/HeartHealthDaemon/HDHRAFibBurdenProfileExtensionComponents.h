@class HDAnalyticsDailyEventManager, HDHRAFibBurdenRescindedNotificationManager, HKHRAFibBurdenAnalyzer, HKFeatureStatusManager;
@protocol HKHRAFibBurdenSevenDayAnalysisScheduling, HDHRAFibBurdenNotificationManaging, HDFeatureAvailabilityExtension;

@interface HDHRAFibBurdenProfileExtensionComponents : NSObject

@property (retain, nonatomic) id<HDFeatureAvailabilityExtension> featureAvailabilityManager;
@property (retain, nonatomic) HKFeatureStatusManager *featureStatusManager;
@property (retain, nonatomic) HDAnalyticsDailyEventManager *dailyAnalyticsEventManager;
@property (nonatomic) unsigned long long stateHandlerHandle;
@property (retain, nonatomic) id<HDHRAFibBurdenNotificationManaging> notificationManager;
@property (retain, nonatomic) HDHRAFibBurdenRescindedNotificationManager *notificationsRescindedManager;
@property (retain, nonatomic) id<HKHRAFibBurdenSevenDayAnalysisScheduling> sevenDayAnalysisScheduler;
@property (retain, nonatomic) HKHRAFibBurdenAnalyzer *analyzer;

+ (id)makeComponentsForProfile:(id)a0;
+ (id)determineDeviceCapability;
+ (id)makeComponentsForTesting;

- (id)init;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)_initForTesting;

@end
