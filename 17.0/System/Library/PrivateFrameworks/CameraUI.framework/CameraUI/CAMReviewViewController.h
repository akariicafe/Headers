@class NSArray, PUReviewDataSource, PUReviewAssetsMediaProvider, PUReviewAssetsDataSourceManager, PUAssetExplorerReviewScreenViewController, NSString;
@protocol CAMCameraReviewDelegate;

@interface CAMReviewViewController : UIViewController <PUAssetExplorerReviewScreenViewControllerDelegate, CAMCameraReviewViewController>

@property (readonly, nonatomic) NSArray *_initialAssets;
@property (readonly, nonatomic) PUReviewDataSource *_reviewDataSource;
@property (readonly, nonatomic) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager;
@property (readonly, nonatomic) PUReviewAssetsMediaProvider *_internalReviewMediaProvider;
@property (readonly, nonatomic) PUAssetExplorerReviewScreenViewController *_internalReviewViewController;
@property (weak, nonatomic) id<CAMCameraReviewDelegate> reviewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAssets:(id)a0;
- (BOOL)assetExplorerReviewScreenViewController:(id)a0 canPerformActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (void)assetExplorerReviewScreenViewController:(id)a0 didPerformCompletionAction:(unsigned long long)a1 withSelectedAssetUUIDs:(id)a2 livePhotoDisabledAssetUUIDs:(id)a3 substituteAssetsByUUID:(id)a4;
- (BOOL)assetExplorerReviewScreenViewController:(id)a0 shouldEnableActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)a0;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)a0;

@end
