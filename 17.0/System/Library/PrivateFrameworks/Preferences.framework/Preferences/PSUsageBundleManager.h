@class NSDictionary, NSArray, NSMutableArray;

@interface PSUsageBundleManager : NSObject {
    NSDictionary *_bundleMap;
    NSArray *_usageBundleApps;
    NSMutableArray *_storageReporters;
}

- (void).cxx_destruct;
- (void)vendUsageBundleAppsWithHandler:(id /* block */)a0;
- (void)_loadUsageBundlesWithHandler:(id /* block */)a0;
- (id)allUsageBundleApps;

@end
