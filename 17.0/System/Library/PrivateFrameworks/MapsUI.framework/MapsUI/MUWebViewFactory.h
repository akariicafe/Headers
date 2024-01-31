@class NSCache, WKProcessPool;

@interface MUWebViewFactory : NSObject {
    WKProcessPool *_processPool;
    NSCache *_webViewCache;
}

+ (id)sharedWebViewFactory;

- (id)init;
- (void).cxx_destruct;
- (id)dequeueItemWithBridgeConfiguration:(id)a0;
- (void)requeueItem:(id)a0;

@end
