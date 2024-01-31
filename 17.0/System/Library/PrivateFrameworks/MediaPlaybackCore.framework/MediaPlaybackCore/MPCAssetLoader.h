@class NSOperationQueue, MPCPlayerItemConfigurator;
@protocol MPCAssetLoaderDelegate;

@interface MPCAssetLoader : NSObject <MFAssetLoading>

@property (readonly, nonatomic) NSOperationQueue *loadingQueue;
@property (weak, nonatomic) id<MPCAssetLoaderDelegate> delegate;
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator;

- (double)unloadingPlaybackAssetsOnIdleDuration;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)cancelLoading;
- (void)loadAssetFor:(id)a0 token:(long long)a1 completion:(id /* block */)a2;
- (void)loadAssetValuesFor:(id)a0 keys:(id)a1 completion:(id /* block */)a2;

@end
