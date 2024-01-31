@class NSError, NSString, VSIdentityProvider, VSAccountStore, VSDevice, VSRemoteNotifier, NSOperationQueue, VSPreferences, NSObject;
@protocol OS_dispatch_queue;

@interface VSIdentityProviderInfoCenter : NSObject <VSRemoteNotifierDelegate>

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSIdentityProvider *cachedIdentityProvider;
@property (retain, nonatomic) NSString *cachedDesignatedAppBundleIdentifier;
@property (nonatomic) BOOL cachedIsSetTopBox;
@property (nonatomic) BOOL setupCompleted;
@property (nonatomic) BOOL ignoredFirstNotification;
@property (retain, nonatomic) NSError *currentError;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSDevice *device;
@property (retain, nonatomic) VSAccountStore *accountStore;
@property (copy, nonatomic) id /* block */ newIdentityProviderFetchAllOperationBlock;
@property (copy, nonatomic) id /* block */ newIdentityProviderFetchOperationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (void)_accountStoreDidChange;
- (id)init;
- (void)dealloc;
- (void)_refresh:(id /* block */)a0;
- (void).cxx_destruct;
- (void)remoteNotifier:(id)a0 didReceiveRemoteNotificationWithUserInfo:(id)a1;
- (void)enqueueInfoQueryWithCompletion:(id /* block */)a0;
- (void)_developerSettingsDidChange;
- (void)_identityProviderForSetTopBoxProfile:(id)a0 completion:(id /* block */)a1;
- (void)_postdentityProviderInfoDidChangeNotification;
- (id)_value:(id)a0 withDefault:(id)a1;
- (void)enqueueIdentityProviderAppsQueryWithCompletion:(id /* block */)a0;
- (void)enqueueManagedSetTopBoxInfoQueryWithCompletion:(id /* block */)a0;
- (void)enqueueSetTopBoxInfoQueryWithCompletion:(id /* block */)a0;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(id /* block */)a0;
- (void)fetchAccountAndIdentityProvider:(id /* block */)a0;
- (void)fetchIdentityProviderAppBundleIdFromDeveloperSettings:(id /* block */)a0;

@end
