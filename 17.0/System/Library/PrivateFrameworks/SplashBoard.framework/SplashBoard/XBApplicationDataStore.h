@class NSCountedSet, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface XBApplicationDataStore : NSObject <XBSnapshotManifestStore> {
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_cacheableBundleIdentifiers;
    NSMutableDictionary *_cachedStoresByBundleIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)loadManifestDataForBundleIdentifier:(id)a0;
- (id)init;
- (void)_persistCompatibilityInfo:(id)a0 forBundleIdentifier:(id)a1;
- (void)_addBundleIdentifierToLaunchInterfaceDenyList:(id)a0;
- (id)_init;
- (void)clearManifestDataForBundleIdentifier:(id)a0;
- (void)beginAccessBlockForBundleIdentifier:(id)a0;
- (long long)_bundleIdentifierDeniedLaunchInterfaceCount:(id)a0;
- (id)_loadCompatibilityInfoForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)persistManifestData:(id)a0 forBundleIdentifier:(id)a1;
- (id)_storeForBundleIdentifier:(id)a0;
- (void)_removeBundleIdentifierFromLaunchInterfaceDenyList:(id)a0;
- (void)_clearCompatibilityInfoForBundleIdentifier:(id)a0;
- (void)synchronizeForBundleIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_bundleIdentifierHasDeniedLaunchInterface:(id)a0;
- (void)endAccessBlockForBundleIdentifier:(id)a0;

@end
