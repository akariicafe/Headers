@class NSString, NSMutableSet, MCProfileConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VSManagedProfileConnection : NSObject <MCProfileConnectionObserver>

@property (retain, nonatomic) MCProfileConnection *profileConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedConnection;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)userToken;
- (void).cxx_destruct;
- (long long)TVProviderModificationAllowed;
- (long long)UIAppInstallationAllowed;
- (long long)accountModificationAllowed;
- (long long)analyticsAllowed;
- (long long)appInstallationAllowed;
- (long long)boolForManagedConfigurationBool:(int)a0;
- (long long)maximumAppsRating;
- (id)providerUniqueID;
- (void)refreshProfileWithCompletion:(id /* block */)a0;

@end
