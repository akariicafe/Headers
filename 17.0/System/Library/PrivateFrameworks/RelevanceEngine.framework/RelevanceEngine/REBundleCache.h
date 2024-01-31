@class REConcurrentDictionary;

@interface REBundleCache : NSObject {
    REConcurrentDictionary *_cachedBundles;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)bundleAtPath:(id)a0;
- (void).cxx_destruct;

@end
