@class UIViewController, PUQuickCropContext;

@interface PUPhotoKitEditActionPerformer : PUPhotoKitActionPerformer {
    UIViewController *_presentedAlertViewController;
}

@property (retain, nonatomic) PUQuickCropContext *quickCropContext;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;
+ (BOOL)shouldEnableOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)_beginEditingCurrentAsset;
- (void)_presentEditorForAsset:(id)a0;

@end
