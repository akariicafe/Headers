@class PUReviewScreenBarsModel;
@protocol PUFunEffectsViewControllerObserver, PUReviewAssetProvider;

@interface PUAssetExplorerReviewScreenFunEffectsActionPerformer : PUAssetExplorerReviewScreenActionPerformer

@property (retain, nonatomic) id<PUReviewAssetProvider> reviewAssetProvider;
@property (weak, nonatomic) id<PUFunEffectsViewControllerObserver> funEffectsObserver;
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewBarsModel;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_presentFunEffectsViewControllerForAsset:(id)a0;

@end
