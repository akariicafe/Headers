@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ATDownloadProgressManager : NSObject <NSXPCListenerDelegate, ATDownloadProgressListener, ATAssetLinkControllerObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableSet *_downloadObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)getAllDownloadsWithReplyBlock:(id /* block */)a0;
- (id)init;
- (void)start;
- (void)assetLinkController:(id)a0 didFinishAsset:(id)a1;
- (void)assetLinkController:(id)a0 didChangeDownloadStateForAssets:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void)assetLinkController:(id)a0 didUpdateAsset:(id)a1;
- (void)assetLinkController:(id)a0 didProcessFinishedAsset:(id)a1;
- (void).cxx_destruct;
- (void)prioritizeDownloadWithStoreForLibraryIdentifier:(long long)a0 withReplyBlock:(id /* block */)a1;
- (void)assetLinkController:(id)a0 didEnqueueAsset:(id)a1;

@end
