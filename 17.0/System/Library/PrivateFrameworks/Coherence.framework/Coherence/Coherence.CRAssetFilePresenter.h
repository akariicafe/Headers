@class NSURL;

@interface Coherence.CRAssetFilePresenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ presentedItemURL;
    void /* unknown type, empty encoding */ assetManager;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ presentedItemOperationQueue;

- (id)init;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentedSubitemDidChangeAtURL:(id)a0;
- (void)presentedSubitemDidAppearAtURL:(id)a0;

@end
