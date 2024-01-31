@class NTKFaceBundleLoader, NSMutableDictionary, NSArray;

@interface NTKFaceBundleManager : NSObject {
    NSArray *_cachedLookup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lookupLock;
}

@property (readonly, nonatomic) NTKFaceBundleLoader *loader;
@property (readonly, nonatomic) NSMutableDictionary *progressiveBundleIDLookup;
@property (readonly, nonatomic) NSMutableDictionary *progressiveStyleLookup;

+ (id)sharedManager;

- (void)dealloc;
- (id)_init;
- (void).cxx_destruct;
- (id)_generateLookupsIfNecessary;
- (void)_resetCaches;
- (void)argonUpdated:(id)a0;
- (void)enumerateArgonKeyDescriptorsWithBlock:(id /* block */)a0;
- (void)enumerateFaceBundlesOnDevice:(id)a0 includingLegacy:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)enumerateFaceBundlesOnDevice:(id)a0 withBlock:(id /* block */)a1;
- (id)faceBundleForBundleIdentifier:(id)a0 onDevice:(id)a1;
- (id)faceBundleForBundleIdentifier:(id)a0 onDevice:(id)a1 forMigration:(BOOL)a2;
- (id)faceBundleForFaceStyle:(long long)a0 onDevice:(id)a1;
- (BOOL)loadKeyDescriptor:(id)a0;

@end
