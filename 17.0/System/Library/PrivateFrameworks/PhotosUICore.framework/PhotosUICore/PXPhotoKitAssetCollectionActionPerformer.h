@class NSString, NSURL, PXAssetsDataSource, PXPhotoStreamComposeServiceViewController, UIAction, PXAssetReference, PHFetchResult, PXVideoTrimQueueController;
@protocol UITraitEnvironment, UIDragSession, PXMemoryAssetsActionFactory, UIDropSession;

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer <PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate, PXAssetsSharingHelperDelegate, PXPhotoKitAssetCollectionActionPerformerInput> {
    PXVideoTrimQueueController *_trimController;
    PXPhotoStreamComposeServiceViewController *_composeServiceController;
    NSURL *_exportCopyDirectoryParent;
}

@property (class, readonly, nonatomic) BOOL isActionDestructive;

@property (retain, nonatomic) UIAction *sendingAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) id<UIDragSession> dragSession;
@property (readonly, nonatomic) id<UITraitEnvironment> traitEnvironment;

+ (BOOL)canPerformActionType:(id)a0 onAssetCollectionReference:(id)a1 withInputs:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)createBarButtonItemForAssetCollectionReference:(id)a0 withTarget:(id)a1 action:(SEL)a2;
+ (id)createStandardActionForAssetCollectionReference:(id)a0 withInput:(id)a1 handler:(id /* block */)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (void)_cleanupTemporaryFiles;
- (id)_confirmationAlertTitleForBlacklistingAction:(id)a0 viewSpec:(id)a1;
- (id)_createAndConfigurePhotoStreamComposeServiceViewControllerWithAlbumTitle:(id)a0;
- (void)_promptBlacklistingConfirmatonForUserAction:(id)a0 viewSpec:(id)a1 completionHandler:(id /* block */)a2;
- (void)controller:(id)a0 didCancelTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 didFinishTrimmingVideoSources:(id)a1;
- (void)controller:(id)a0 dismissViewControllerWithCompletion:(id /* block */)a1;
- (void)controller:(id)a0 presentViewController:(id)a1;
- (void)handleAddToCloudSharedAlbum:(id)a0 pickedAssets:(id)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (void)photoStreamComposeService:(id)a0 didPostComment:(id)a1;
- (void)photoStreamComposeServiceDidCancel:(id)a0;

@end
