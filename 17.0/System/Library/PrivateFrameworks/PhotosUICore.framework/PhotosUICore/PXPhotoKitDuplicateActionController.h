@class NSProgress, PXActivityProgressController, NSUndoManager, PXDuplicateAssetsAction;

@interface PXPhotoKitDuplicateActionController : NSObject {
    PXDuplicateAssetsAction *_action;
}

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PXActivityProgressController *progressController;
@property (readonly, nonatomic) BOOL shouldUseAlertController;
@property (readonly, nonatomic) NSUndoManager *undoManager;

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)a0 hasPhotos:(BOOL)a1 hasVideos:(BOOL)a2;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_checkHasPhotos:(BOOL *)a0 hasVideos:(BOOL *)a1;
- (void)_finishedDuplicationWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_presentAlertWithError:(id)a0;
- (void)_progressFractionCompletedDidChange;
- (BOOL)_validateOriginalAssetResourcesForDuplicateAction:(long long)a0;
- (id)alertConfigurationForDuplicateActionWithUserConfirmationHandler:(id /* block */)a0;
- (void)configureAlertConfiguration:(id)a0 withUserConfirmationHandler:(id /* block */)a1;
- (id)initWithSelectionSnapshot:(id)a0 undoManager:(id)a1;
- (void)performDuplicateAction:(long long)a0 newStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;

@end
