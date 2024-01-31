@class UNUserNotificationCenter, NSString;
@protocol HMMLogEventSubmitting, HMDUserNotificationCenterDelegate;

@interface HMDUserNotificationCenter : HMFObject <UNUserNotificationCenterDelegate, HMDUserNotificationCenterSettingsProviding>

@property (readonly) UNUserNotificationCenter *userNotificationCenter;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (weak) id<HMDUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeNumber:(long long)a0;
- (void).cxx_destruct;
- (void)_showNotification:(id)a0;
- (id)configureWithNotificationCategories:(id)a0;
- (void)fetchAreUserNotificationsEnabledWithCompletion:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 logEventSubmitter:(id)a1;
- (void)notificationSettingsWithCompletionHandler:(id /* block */)a0;
- (void)removeNotificationRequestsWithIdentifiers:(id)a0;
- (id)showNotificationWithTitle:(id)a0 body:(id)a1 threadIdentifier:(id)a2 categoryIdentifier:(id)a3 requestIdentifier:(id)a4 date:(id)a5 attachments:(id)a6 userInfo:(id)a7 shouldIgnoreDoNotDisturb:(BOOL)a8 interruptionLevel:(unsigned long long)a9 logEventTopic:(long long)a10;
- (void)updateContent:(id)a0 forNotificationWithRequestIdentifier:(id)a1;

@end
