@interface SAPathManager : NSObject

@property (class, readonly) SAPathManager *defaultManager;

- (void)registerPaths:(id)a0 forBundleID:(id)a1 completionHandler:(id /* block */)a2;
- (void)unregisterURLs:(id)a0 forBundleID:(id)a1 completionHandler:(id /* block */)a2;

@end
