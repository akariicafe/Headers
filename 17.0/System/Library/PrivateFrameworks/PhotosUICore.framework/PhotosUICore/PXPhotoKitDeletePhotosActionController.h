@class NSArray, UIAlertController, NSUndoManager;
@protocol PXPhotoKitDeletePhotosActionControllerDelegate;

@interface PXPhotoKitDeletePhotosActionController : NSObject {
    id /* block */ _completionHandler;
    id /* block */ _willDeleteHandler;
}

@property (readonly, copy, nonatomic) NSArray *_assets;
@property (readonly, copy, nonatomic) NSArray *_plAssets;
@property (readonly, copy, nonatomic) NSArray *_plAdditionalAssetsToDelete;
@property (retain, nonatomic, setter=_setMainAlertController:) UIAlertController *_mainAlertController;
@property (retain, nonatomic, setter=_setOneTimeConfirmationAlertController:) UIAlertController *_oneTimeConfirmationAlertController;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, weak, nonatomic) id<PXPhotoKitDeletePhotosActionControllerDelegate> delegate;
@property (nonatomic) BOOL shouldSkipDeleteConfirmation;

+ (id)_suffix:(id)a0;
+ (void)assetTypeCountsForAssets:(id)a0 photosCount:(long long *)a1 videosCount:(long long *)a2 othersCount:(long long *)a3;
+ (id)warningStringForAssets:(id)a0 isDeleting:(BOOL)a1;

- (void).cxx_destruct;
- (void)_ensureMainAlertController;
- (void)_ensureOneTimeConfirmationAlertController;
- (void)_getDeleteActionSheetTitle:(id *)a0 destructiveButtonTitle:(id *)a1 cancelButtonTitle:(id *)a2 isDestructiveBehavior:(BOOL *)a3 forAssets:(id)a4 duplicatePhotoStreamCount:(long long)a5;
- (void)_handleFinalUserDecisionShouldDelete:(BOOL)a0;
- (void)_handleMainAlertConfirmed:(BOOL)a0;
- (void)_handleOneTimeAlertConfirmed;
- (void)_runDestructiveActionWithCompletion:(id /* block */)a0;
- (void)_showOnetimeConfirmation;
- (id)initWithAction:(long long)a0 assets:(id)a1 undoManager:(id)a2 delegate:(id)a3;
- (void)performWithWillDeleteHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(id /* block */)a0;

@end
