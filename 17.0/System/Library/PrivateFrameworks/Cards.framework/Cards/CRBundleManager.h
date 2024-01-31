@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CRBundleManager : NSObject {
    NSMutableSet *_bundles;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryName;
+ (id)bundleDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (void)getBundlesWithCompletion:(id /* block */)a0;
- (void)_getBundlesOnCurrentQueueWithCompletion:(id /* block */)a0;

@end
