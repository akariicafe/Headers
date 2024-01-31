@class MAAsset, NSObject;
@protocol OS_dispatch_queue;

@interface MABrainDownloader : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MAAsset *_asset;
}

- (void).cxx_destruct;
- (id)initWithMAAsset:(id)a0;
- (void)download:(id)a0 options:(id)a1 completion:(id /* block */)a2;

@end
