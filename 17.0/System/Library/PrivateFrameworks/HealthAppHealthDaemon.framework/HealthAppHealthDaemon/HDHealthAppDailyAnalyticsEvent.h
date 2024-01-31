@class NSUserDefaults, HDDeviceContextStoreManager, UNUserNotificationCenter, NSString, HDProfile, HDCloudSyncManager;

@interface HDHealthAppDailyAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) NSUserDefaults *healthAppSharedUserDefaults;
@property (weak, nonatomic) HDCloudSyncManager *unitTest_cloudSyncManager;
@property (weak, nonatomic) HDDeviceContextStoreManager *unitTest_deviceContextStoreManager;
@property (weak, nonatomic) UNUserNotificationCenter *unitTest_userNotificationCenter;
@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (id)initWithProfile:(id)a0;
- (id)_userNotificationCenter;
- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_cloudSyncManager;
- (long long)_approximateDaysSinceLastAppOpen;
- (BOOL)_areHealthAppNotificationsAuthorized;
- (BOOL)_areTrendNotificationsEnabled;
- (id)_deviceContextStoreManager;
- (long long)_floorInteger:(int)a0 toSignificantFigures:(int)a1;
- (id)_isHealthAppOnboardedString;
- (id)_supportsSecureContainer;
- (id)_welcomeFlowCompletedDate;

@end
