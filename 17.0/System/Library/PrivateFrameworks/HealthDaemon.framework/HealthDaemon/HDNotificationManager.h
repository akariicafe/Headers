@class UNUserNotificationCenter, NSString, HDProfile, HKObserverSet, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface HDNotificationManager : NSObject <HDDiagnosticObject> {
    HDProfile *_profile;
    long long _bundle;
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSDate *_lastNotificationDate;
}

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (readonly, nonatomic) BOOL areHealthNotificationsAuthorized;
@property (readonly, nonatomic) BOOL areHealthCriticalAlertsAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)badgeForDomain:(long long)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)removeNotificationObserver:(id)a0;
- (void)postNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_aggregateBadge;
- (void)receivedCompanionUserNotificationRequest:(id)a0 completion:(id /* block */)a1;
- (void)postNotificationWithTitle:(id)a0 body:(id)a1 categoryIdentifier:(id)a2 subtitle:(id)a3 domain:(long long)a4 url:(id)a5 accessoryImageName:(id)a6 header:(id)a7 completion:(id /* block */)a8;
- (void)addNotificationObserver:(id)a0;
- (void)postNotificationWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)removeDeliveredNotificationsWithCategoryIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePendingNotificationsWithIdentifiers:(id)a0;
- (void)postCompanionUserNotificationOfType:(long long)a0 completion:(id /* block */)a1;
- (id)_resourceQueue_badgeForDomain:(long long)a0 error:(id *)a1;
- (BOOL)incrementBadgeForDomain:(long long)a0 count:(long long)a1 error:(id *)a2;
- (id)initWithProfile:(id)a0 bundle:(long long)a1;
- (id)_badgeForDomain:(long long)a0 error:(id *)a1;
- (void)setBadge:(id)a0 forDomain:(long long)a1 completion:(id /* block */)a2;
- (void)postNotificationWithTitle:(id)a0 body:(id)a1 categoryIdentifier:(id)a2 subtitle:(id)a3 domain:(long long)a4 accessoryImageName:(id)a5 header:(id)a6 completion:(id /* block */)a7;

@end
