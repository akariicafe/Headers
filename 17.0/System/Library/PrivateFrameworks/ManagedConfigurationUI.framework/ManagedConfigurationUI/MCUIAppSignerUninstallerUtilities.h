@interface MCUIAppSignerUninstallerUtilities : NSObject

+ (void)_asyncUninstallApplicationsForAppsigner:(id)a0 withUninstaller:(id)a1 dispatchGroup:(id)a2;
+ (void)_asyncUninstallProvisioningProfilesForAppSigner:(id)a0 withUninstaller:(id)a1 dispatchGroup:(id)a2;
+ (id)_provisioningProfileUUIDsForAppSigner:(id)a0;
+ (void)uninstallAppSigner:(id)a0 withUninstaller:(id)a1 dispatchGroup:(id)a2 completion:(id /* block */)a3;

@end
