@class NSMutableSet;

@interface _CRKProviderBundleManager : CRBundleManager {
    NSMutableSet *_providerBundles;
}

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryName;

- (void).cxx_destruct;
- (void)getProviderBundlesWithCompletion:(id /* block */)a0;

@end
