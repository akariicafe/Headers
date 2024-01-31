@interface GKApplicationWorkspace : NSObject

+ (long long)getPlatformForBundleID:(id)a0;
+ (id)defaultWorkspace;

- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)a0;
- (void)openSoftwareUpdateSettings;
- (void)openICloudSettings;
- (id)applicationProxyForBundleID:(id)a0;
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)a0;
- (id)openURL:(id)a0;

@end
