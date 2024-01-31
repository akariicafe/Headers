@class NSString, NSArray, NSURL, IKAppContext, NSObject;
@protocol IKAppCacheDelegate, IKAppContextDelegate, IKApplication, OS_dispatch_queue;

@interface IKAppCache : NSObject <IKAppContextInternalDelegate> {
    NSObject<OS_dispatch_queue> *_appCacheQueue;
}

@property (readonly, nonatomic) NSURL *currentAppJSURL;
@property (readonly, nonatomic) NSString *currentAppJSChecksum;
@property (readonly, copy, nonatomic) NSURL *appLocalJSFileURL;
@property (readonly, nonatomic) NSString *appLocalJSChecksum;
@property (readonly, copy, nonatomic) NSURL *appJSFileURL;
@property (readonly, nonatomic) NSString *appJSChecksum;
@property (readonly, nonatomic) NSArray *appJSChecksumHistory;
@property (weak, nonatomic) id<IKApplication> app;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) IKAppContext *validationContext;
@property (copy, nonatomic) id /* block */ validationCompletionHandler;
@property (nonatomic) BOOL shouldIgnoreHTTPCache;
@property (weak, nonatomic) id<IKAppContextDelegate> appContextDelegate;
@property (weak, nonatomic) id<IKAppCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_appContextDelegateSelectors;

- (void)refreshWithCompletion:(id /* block */)a0;
- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)_performAsync:(id /* block */)a0;
- (id)navigationControllerForContext:(id)a0;
- (void)appContext:(id)a0 didFailWithError:(id)a1;
- (void)appContext:(id)a0 didStopWithOptions:(id)a1;
- (void)appContext:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (void)appContext:(id)a0 needsReloadWithUrgency:(unsigned long long)a1 options:(id)a2;
- (BOOL)appContext:(id)a0 validateDOMDocument:(id)a1 inContext:(id)a2 error:(id *)a3;
- (id)deviceConfigForContext:(id)a0;
- (id)modalControllerForContext:(id)a0;
- (id)objectForMediaItem:(id)a0;
- (id)objectForPlayer:(id)a0;
- (id)objectForPlaylist:(id)a0;
- (id)tabBarForContext:(id)a0;
- (void)cleanBlobStorageWithCompletion:(id /* block */)a0;
- (id)_cacheFileURLForAppJS:(id)a0 checksum:(id)a1 error:(id *)a2;
- (void)_checkManifest;
- (void)_cleanupValidationContext;
- (void)_loadManifest;
- (void)_storeManifest;
- (id)_validatedChecksumForScript:(id)a0 error:(id *)a1;
- (void)appContext:(id)a0 didStartWithOptions:(id)a1 validatedJSString:(id)a2;
- (BOOL)appContext:(id)a0 shouldStartWithScript:(id)a1 scriptURL:(id)a2 loadedFromFallback:(BOOL)a3;
- (void)appJSURLWithCompletion:(id /* block */)a0;
- (BOOL)isOurDispatchQueue;
- (BOOL)shouldForceIgnoreHTTPCacheForAppContext:(id)a0;
- (void)updateCacheWithValidatedJS:(id)a0 completion:(id /* block */)a1;

@end
