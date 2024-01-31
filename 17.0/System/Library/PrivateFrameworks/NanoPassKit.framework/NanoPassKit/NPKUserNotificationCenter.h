@class NSString, UNUserNotificationCenter;

@interface NPKUserNotificationCenter : NSObject <UNUserNotificationCenterDelegatePrivate> {
    UNUserNotificationCenter *_notificationCenter;
    long long _authorizationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)userNotificationCenter:(id)a0 didChangeSettings:(id)a1;
- (void).cxx_destruct;
- (void)fetchAuthorizationStatusWithCompletion:(id /* block */)a0;
- (void)requestAuthorizationIfNecessaryForPassesManager:(id)a0 withCompletion:(id /* block */)a1;
- (void)_addNotificationWithNotificationIdentifier:(id)a0 title:(id)a1 body:(id)a2 categoryIdentifier:(id)a3 userInfo:(id)a4 wantsBadgedIcon:(BOOL)a5 suppressed:(BOOL)a6 completion:(id /* block */)a7;
- (void)_requestNotificationAuthorizationWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_requestNotificationAuthorizationWithPreconditionCheck:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_requestWithNotificationIdentifier:(id)a0 title:(id)a1 body:(id)a2 categoryIdentifier:(id)a3 userInfo:(id)a4 wantsBadgedIcon:(BOOL)a5 suppressed:(BOOL)a6;
- (void)addNotification:(id)a0 completion:(id /* block */)a1;
- (id)initWithNotificationBundleIdentifier:(id)a0;
- (void)requestAuthorizationWithCompletion:(id /* block */)a0;
- (void)setNotificationCategoryWithIdentifier:(id)a0 intentIdentifier:(id)a1 actions:(id)a2 options:(unsigned long long)a3;

@end
