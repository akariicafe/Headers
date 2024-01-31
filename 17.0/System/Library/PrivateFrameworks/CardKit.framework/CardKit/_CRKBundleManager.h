@class NSSet, NSMutableSet;

@interface _CRKBundleManager : NSObject {
    NSMutableSet *_bundles;
}

@property (readonly, nonatomic) NSSet *bundles;

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (void)registerBundle:(id)a0;
- (void)loadBundles;

@end
