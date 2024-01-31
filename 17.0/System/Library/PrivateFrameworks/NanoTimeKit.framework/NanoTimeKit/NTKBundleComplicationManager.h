@class NTKCompanionBundleComplicationSyncCoordinator, NSDictionary, NTKBundleComplicationDataSourceLoader;

@interface NTKBundleComplicationManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_infoByBundleIdentifierLookup;
}

@property (readonly, nonatomic) NTKBundleComplicationDataSourceLoader *loader;
@property (readonly, nonatomic) NTKCompanionBundleComplicationSyncCoordinator *syncCoordinator;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)localizedAppNameForBundleIdentifier:(id)a0;
- (id)_buildDataSourceInfoLookup;
- (Class)_dataSourceClassForBundleIdentifier:(id)a0;
- (void)_enumerateBundleInfo:(id /* block */)a0;
- (id)_infoByBundleIdentifierLookup;
- (id)_infoForBundleIdentifier:(id)a0;
- (id)allComplicationAppBundleIDs;
- (BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)a0;
- (id)bundleComplicationsForBundleIdentifier:(id)a0;
- (BOOL)bundleExistsWithIdentifier:(id)a0 appBundleIdentifier:(id)a1;
- (Class)dataSourceClassForBundleComplication:(id)a0;
- (Class)dataSourceClassForBundleComplication:(id)a0 withFamily:(long long)a1 andDevice:(id)a2 factorInMigration:(BOOL)a3;
- (void)enumerateBundlesForComplicationFamily:(long long)a0 device:(id)a1 withBlock:(id /* block */)a2;
- (id)groupIdentifierForBundleIdentifier:(id)a0;
- (id)localizedComplicationNameForBundleIdentifier:(id)a0;
- (id)sectionIdentifierForBundleIdentifier:(id)a0;
- (void)updateDescriptors;

@end
