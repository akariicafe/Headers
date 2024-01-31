@class NSOrderedSet, NSString, PXLoadingStatusManager, PHAssetCollection, UIViewController;
@protocol PUStoryAssetPickerHelperDelegate, PXDisplayAssetCollection;

@interface PUStoryAssetPickerHelper : NSObject <PHPickerViewControllerDelegate>

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) NSOrderedSet *preselectedOIDs;
@property (readonly, nonatomic) BOOL preselectedAssetsHaveDefaultSortOrder;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> containerCollection;
@property (readonly, nonatomic) UIViewController *pickerViewController;
@property (weak, nonatomic) id<PUStoryAssetPickerHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
