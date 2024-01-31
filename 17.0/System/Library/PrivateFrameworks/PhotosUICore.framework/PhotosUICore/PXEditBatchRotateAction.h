@interface PXEditBatchRotateAction : PXEditBatchAction

- (long long)direction;
- (void)performAction:(id /* block */)a0;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastUndoTitle;
- (void)_syncRotateDidFinishWithResults:(id)a0 didCancel:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithPresetManager:(id)a0 syncProgress:(id)a1 asyncProgress:(id)a2 asyncLoadingStatusManager:(id)a3 forAssets:(id)a4;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end
