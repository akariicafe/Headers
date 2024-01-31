@class NSMutableDictionary, NSMutableSet;

@interface INBundleAccessManager : NSObject {
    struct { unsigned int _requestCount; unsigned int _securityScopeCacheHitCount; unsigned int _accessibleCacheHitCount; unsigned int _cacheMissCount; unsigned int _imageServiceLoadCount; } _stats;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *securityScopedURLs;
@property (readonly, nonatomic) NSMutableSet *accessibleBundleIDs;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)grantForBundleIdentifier:(id)a0 error:(id *)a1;
- (id)_grantForBundleIdentifiers:(id)a0 error:(id *)a1;
- (id)_stats;
- (id)grantForBundleIdentifiers:(id)a0 error:(id *)a1;

@end
