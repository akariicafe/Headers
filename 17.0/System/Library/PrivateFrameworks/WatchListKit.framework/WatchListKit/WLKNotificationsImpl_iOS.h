@class NSString;
@protocol WLKNotificationCenterDelegate;

@interface WLKNotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate, WLKNotificationsImpl>

@property (nonatomic) BOOL topicsAreInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WLKNotificationCenterDelegate> delegate;

+ (id)_JSONDictForResponse:(id)a0;
+ (unsigned long long)_interruptionLevelForNumber:(id)a0;

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)getNotificationSettings:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_fetchTopics:(id /* block */)a0;
- (id)_topicIdentifierForCategory:(long long)a0;
- (void)_networkReachabilityDidChangeNotification:(id)a0;
- (id)_notificationCenter;
- (void)post:(id)a0 title:(id)a1 body:(id)a2 options:(id)a3;
- (void)_initializeTopics;
- (BOOL)isCategoryBadgeSettingEnabledByUser:(long long)a0;
- (void)_storeFrontChangedNotification:(id)a0;
- (void)userNotificationCenter:(id)a0 didChangeSettings:(id)a1;
- (id)_displayNameForSubsectionID:(id)a0;
- (void)userNotificationCenter:(id)a0 didOpenApplicationForResponse:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)_authOptions;
- (BOOL)isCategoryEnabledByUser:(long long)a0;

@end
