@class UIViewController, PUActivitySharingController;

@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) UIViewController *preheatedSharingViewController;
@property (retain, nonatomic) PUActivitySharingController *activitySharingController;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)a0 inDataSource:(id)a1;
- (id)_createSharingViewControllerFromCurrentSelection;
- (void)preheatUserInteractionTask;

@end
