@class NSString, NSURL, NSOperationQueue, WKProcessPool, NSCountedSet, NSMutableSet, NSMutableArray, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataManager : NSObject <WBSSiteMetadataProviderDelegate> {
    WKProcessPool *_processPool;
    NSMutableSet *_usedWebViews;
    NSMutableSet *_reusableWebViews;
    NSMutableArray *_siteMetadataProviders;
    NSObject<OS_dispatch_queue> *_siteMetadataProvidersAccessQueue;
    NSOperationQueue *_operationQueue;
    NSCountedSet *_activeOperations;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableSet *_tokens;
    NSMutableDictionary *_requestsToRequestInfos;
}

@property (readonly, nonatomic) NSURL *injectedBundleURL;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_processPool;
- (void)cancelRequestWithToken:(id)a0;
- (id)initWithInjectedBundleURL:(id)a0;
- (void)preloadRequests:(id)a0 withPriority:(long long)a1 responseHandler:(id /* block */)a2;
- (id)registerRequest:(id)a0 priority:(long long)a1 responseHandler:(id /* block */)a2;
- (void)registerSiteMetadataProvider:(id)a0;
- (void)cancelRequestsWithTokens:(id)a0;
- (void)savePendingProviderChangesBeforeTermination;
- (void)savePendingProviderChangesWithCompletion:(id /* block */)a0;
- (void)setPriority:(long long)a0 ofRequestWithToken:(id)a1;
- (void)_discardWebViewSoon:(id)a0;
- (long long)_highestRequestPriorityForRequest:(id)a0;
- (void)_internalCancelRequestWithToken:(id)a0;
- (void)_internalSetPriority:(long long)a0 ofRequestWithToken:(id)a1;
- (id)_makeWebViewOfSize:(struct CGSize { double x0; double x1; })a0 withConfiguration:(id)a1;
- (unsigned long long)_numberOfConcurrentRequests;
- (id)_popReusableWebView;
- (id)_providerForRequest:(id)a0;
- (void)_registerToken:(id)a0 withProvider:(id)a1;
- (void)_reprioritizeOperationForRequest:(id)a0;
- (BOOL)_requestIsCancelledForToken:(id)a0;
- (void)_scheduleDelayedResponse:(id)a0 forRequestToken:(id)a1;
- (void)_sendRequiresDownloadResponse:(id)a0 toResponseHandlersForRequest:(id)a1;
- (void)_sendResponse:(id)a0 toResponseHandlersForRequest:(id)a1 didReceiveNewData:(BOOL)a2;
- (void)_setUpOperationForRequest:(id)a0 withSiteMetadataProvider:(id)a1 usingOperationBlock:(id /* block */)a2;
- (BOOL)_updateOperationForRequestIfPossible:(id)a0;
- (void)cancelRequestsWithTokens:(id)a0 completionHandler:(id /* block */)a1;
- (void)emptyProviderCaches;
- (void)emptyProviderCachesIncludingFavicons:(BOOL)a0;
- (void)preloadRequest:(id)a0 withPriority:(long long)a1 responseHandler:(id /* block */)a2;
- (id)registerOneTimeRequest:(id)a0 priority:(long long)a1 responseHandler:(id /* block */)a2;
- (void)setPriority:(long long)a0 ofRequestsWithTokens:(id)a1;
- (void)siteMetadataProvider:(id)a0 cancelRequestsWithTokens:(id)a1;
- (void)siteMetadataProvider:(id)a0 didFinishUsingWebView:(id)a1;
- (void)siteMetadataProvider:(id)a0 didReceiveResponse:(id)a1 forRequest:(id)a2 beginOperationUsingBlock:(id /* block */)a3;
- (void)siteMetadataProvider:(id)a0 didReceiveResponse:(id)a1 ofType:(long long)a2 didReceiveNewData:(BOOL)a3 forRequest:(id)a4;
- (void)siteMetadataProvider:(id)a0 getWebViewOfSize:(struct CGSize { double x0; double x1; })a1 withConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)siteMetadataProvider:(id)a0 registerOneTimeRequest:(id)a1 priority:(long long)a2 responseHandler:(id /* block */)a3;
- (id)siteMetadataProvider:(id)a0 registerRequest:(id)a1 priority:(long long)a2 responseHandler:(id /* block */)a3;

@end
