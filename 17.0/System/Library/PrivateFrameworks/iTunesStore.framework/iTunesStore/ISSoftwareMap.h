@class NSArray;

@interface ISSoftwareMap : NSObject {
    NSArray *_applications;
}

@property (readonly, nonatomic) NSArray *applications;

+ (void)startObservingNotifications;
+ (id)applicationForBundleIdentifier:(id)a0;
+ (id)copySoftwareUpdatesPropertyListWithApplications:(id)a0 updatesContext:(id)a1;
+ (id)_newSoftwareUpdateDictionaryForApplication:(id)a0;
+ (void)_startWatchingInstallationNotifications;
+ (id)applicationForBundleIdentifier:(id)a0 applicationType:(id)a1;
+ (id)applicationForPluginBundleIdentifier:(id)a0;
+ (id)applicationForPluginBundleIdentifier:(id)a0 extensionType:(id)a1;
+ (id)containerPathForApp:(id)a0 homeDirectory:(id)a1 systemMetadataDirectory:(id)a2;
+ (id)currentMap;
+ (BOOL)currentMapIsValid;
+ (void)enumerateApplicationsForProxies:(id)a0 usingBlock:(id /* block */)a1;
+ (void)enumerateApplicationsOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
+ (BOOL)haveApplicationsOfType:(id)a0;
+ (void)invalidateCurrentMap;
+ (id)loadedMap;
+ (void)removableSystemApplicationsWithCompletionBlock:(id /* block */)a0;
+ (void)setCurrentMap:(id)a0;

- (id)init;
- (void)dealloc;
- (id)applicationForBundleIdentifier:(id)a0;
- (id)copySoftwareUpdatesPropertyList;
- (void)_loadFromMobileInstallation;
- (id)applicationForItemIdentifier:(id)a0;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)a0;

@end
