@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {
    MBSettingsContext *_settingsContext;
    NSMutableDictionary *_containersByID;
    NSMutableDictionary *_systemDataContainersByID;
    NSMutableDictionary *_systemSharedContainersByID;
}

+ (id)_allPersistedDisabledDomainNamesForPersona:(id)a0;
+ (void)_persistDisabledDomainNames:(id)a0 forPersona:(id)a1;
+ (id)appManager;
+ (id)appManagerWithSettingsContext:(id)a0;

- (id)containerWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)allApps;
- (id)allContainers;
- (id)allPlugins;
- (id)appWithIdentifier:(id)a0;
- (BOOL)isDomainNameEnabled:(id)a0 forPersona:(id)a1;
- (id)_allDisabledDomainNamesForPersona:(id)a0;
- (id)_copyAppsWithPlists:(id)a0 volumeMountPoints:(id)a1 safeHarbor:(BOOL)a2 error:(id *)a3;
- (id)_copySafeHarborsWithVolumeMountPoints:(id)a0 error:(id *)a1;
- (id)_copySystemContainersWithPlists:(id)a0 volumeMountPoints:(id)a1 error:(id *)a2;
- (id)_copySystemContainersWithVolumeMountPoints:(id)a0 error:(id *)a1;
- (id)_copySystemPluginsWithPlists:(id)a0 volumeMountPoints:(id)a1 error:(id *)a2;
- (id)_copySystemPluginsWithVolumeMountPoints:(id)a0 error:(id *)a1;
- (id)_copyUserAppsForPersona:(id)a0 dataSeparatedBundleIDs:(id)a1 volumeMountPoints:(id)a2 error:(id *)a3;
- (BOOL)_isContainerizedAppDomain:(id)a0;
- (void)_reconcileBooksAndHealthInDisabledDomainsList:(id)a0;
- (id)_subdomainNamesForAppDomainNames:(id)a0;
- (void)_syncDisabledDomainsWithAllInstalledAppDomains:(id)a0 persona:(id)a1;
- (id)allDisabledDomainNames;
- (id)allDisabledDomainNamesForPersona:(id)a0;
- (id)allRestrictedDomainNames;
- (id)allRestrictedDomainNamesForPersona:(id)a0;
- (id)allSystemContainers;
- (id)createSafeHarborForContainer:(id)a0 withPersona:(id)a1 error:(id *)a2;
- (id)createSafeHarborForContainer:(id)a0 withPersona:(id)a1 usingIntermediateRestoreDir:(BOOL)a2 error:(id *)a3;
- (id)initWithSettingsContext:(id)a0;
- (BOOL)loadAppsWithPersona:(id)a0 safeHarbors:(BOOL)a1 dataSeparatedBundleIDs:(id)a2 error:(id *)a3;
- (BOOL)loadAppsWithPersona:(id)a0 safeHarbors:(BOOL)a1 error:(id *)a2;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)a0 withPersona:(id)a1 usingIntermediateRestoreDir:(BOOL)a2 withError:(id *)a3;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)a0 withPersona:(id)a1 withError:(id *)a2;
- (void)removeAllDisabledDomainNamesForPersona:(id)a0;
- (void)removeOldSafeHarbors;
- (void)removeStaleStateForUninstalledAppsForPersona:(id)a0;
- (void)setEnabled:(BOOL)a0 forDomainName:(id)a1 persona:(id)a2;
- (id)systemDataContainerWithIdentifier:(id)a0;
- (id)systemSharedContainerWithIdentifier:(id)a0;

@end
