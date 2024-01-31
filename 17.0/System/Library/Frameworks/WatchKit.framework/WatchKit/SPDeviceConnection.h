@class NSString, NSXPCConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue, SPDeviceConnectionDelegate;

@interface SPDeviceConnection : NSObject <SPLocalApplicationProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property (retain) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (weak, nonatomic) id<SPDeviceConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedDeviceConnection;

- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)a0 completion:(id /* block */)a1;
- (void)cancelPendingInstallations;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)installProvisioningProfileWithURL:(id)a0 onPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)activeComplicationsForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)fetchInfoForApplicationWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)setAlwaysInstall:(id)a0;
- (void)fetchProvisioningProfilesForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)fetchInstalledComplicationsWithErrorCompletion:(id /* block */)a0;
- (void)getAlwaysInstallForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)fetchInstalledApplicationsWithErrorCompletion:(id /* block */)a0;
- (void)removeApplication:(id)a0 completion:(id /* block */)a1;
- (void)setAlwaysInstall:(id)a0 forDevice:(id)a1;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)installProvisioningProfileWithURL:(id)a0 completion:(id /* block */)a1;
- (void)activeComplicationsWithErrorCompletion:(id /* block */)a0;
- (void)fetchInstalledApplicationsForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)fetchProvisioningProfilesWithCompletion:(id /* block */)a0;
- (void)installApplication:(id)a0 onPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)setLogLevel:(id)a0;
- (void)fetchInfoForApplicationWithBundleID:(id)a0 forPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)a0 forPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)removeProvisioningProfileWithID:(id)a0 fromPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)getAlwaysInstallWithCompletion:(id /* block */)a0;
- (void)fetchInstalledComplicationsForPairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)installAllApplications;
- (void)installApplication:(id)a0 withProvisioningProfiles:(id)a1 onPairedDevice:(id)a2 completion:(id /* block */)a3;
- (void)installApplication:(id)a0 completionWithError:(id /* block */)a1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)removeApplication:(id)a0 fromPairedDevice:(id)a1 completion:(id /* block */)a2;
- (void)addObserver:(id)a0;
- (void)removeProvisioningProfileWithID:(id)a0 completion:(id /* block */)a1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)a0 withErrorCompletion:(id /* block */)a1;
- (void)updatePreferencesForApplicationWithIdentifier:(id)a0 preferences:(id)a1 forPairedDevice:(id)a2 completion:(id /* block */)a3;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)a0 completion:(id /* block */)a1;
- (void)updatePreferencesForApplicationWithIdentifier:(id)a0 preferences:(id)a1 completion:(id /* block */)a2;
- (void)installApplication:(id)a0 withProvisioningProfiles:(id)a1 completionWithError:(id /* block */)a2;
- (void)receiveData:(id)a0;
- (void)invalidateXPCConnection;
- (void)_enumerateObserversSafely:(id /* block */)a0;
- (void)activeComplicationsWithCompletion:(id /* block */)a0;
- (long long)appInstallStateForAppConduitInstallState:(long long)a0;
- (id)connectionProxy:(id /* block */)a0 caller:(const char *)a1;
- (void)createXPCConnectionIfNecessary;
- (void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)a0 completion:(id /* block */)a1;
- (void)fetchInstalledApplicationsWithCompletion:(id /* block */)a0;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchInstalledComplicationsWithCompletion:(id /* block */)a0;
- (void)hideUserNotification;
- (void)installApplication:(id)a0 completion:(id /* block */)a1;
- (void)installApplication:(id)a0 withProvisioningProfiles:(id)a1 completion:(id /* block */)a2;
- (void)installApplication:(id)a0 withProvisioningProfiles:(id)a1 onPairedDevice:(id)a2 completionWithError:(id /* block */)a3;
- (id)localeForUserNotification;
- (void)showUserNotification:(long long)a0 applicationName:(id)a1 extensionBundleID:(id)a2;
- (void)showUserNotification:(long long)a0 bundleID:(id)a1;
- (void)wakeExtensionForWatchApp:(id)a0;

@end
