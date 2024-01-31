@class PXStoryViewModel;

@interface PXStoryMemoryAssetsActionFactory : NSObject <PXMemoryAssetsActionFactory>

@property (readonly, nonatomic) PXStoryViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)assetsPickerPresenter;
- (id)rearrangeMemoryAssetsActionWithAssetCollection:(id)a0 movedAssets:(id)a1 beforeAsset:(id)a2;

@end
