@class NSString, WFUserNotificationManager, WFTriggerNotificationDebouncer;
@protocol WFTriggerUserNotificationManagerDelegate;

@interface WFTriggerUserNotificationManager : NSObject <UNUserNotificationCenterDelegate, WFTriggerNotificationDebouncerDelegate>

@property (readonly, nonatomic) WFUserNotificationManager *userNotificationManager;
@property (readonly, nonatomic) WFTriggerNotificationDebouncer *debouncer;
@property (weak, nonatomic) id<WFTriggerUserNotificationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryIdentifiers;
+ (id)alertCategory;
+ (id)backgroundRunningCategory;
+ (id)promptCategory;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_postNotificationOfType:(unsigned long long)a0 forTrigger:(id)a1 workflowReference:(id)a2 removeDeliveredNotifications:(BOOL)a3 pendingTriggerEventIDs:(id)a4 actionIcons:(id)a5 error:(id *)a6;
- (id)initWithUserNotificationManager:(id)a0;
- (BOOL)postBackgroundRunningNotificationWithConfiguredTriggers:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (void)postNotificationForTrigger:(id)a0 workflowReference:(id)a1 pendingTriggerEventIDs:(id)a2;
- (BOOL)postNotificationOfType:(unsigned long long)a0 forTrigger:(id)a1 workflowReference:(id)a2 removeDeliveredNotifications:(BOOL)a3 pendingTriggerEventIDs:(id)a4 actionIcons:(id)a5 error:(id *)a6;
- (void)postNotificationThatTrigger:(id)a0 failedWithError:(id)a1;
- (void)removeNotificationsWithTriggerIdentifier:(id)a0;

@end
