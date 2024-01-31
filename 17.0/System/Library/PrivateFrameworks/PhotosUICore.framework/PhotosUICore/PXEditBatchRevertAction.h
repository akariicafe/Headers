@interface PXEditBatchRevertAction : PXEditBatchAction

- (void)performAction:(id /* block */)a0;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastUndoTitle;
- (id)localizedActionName;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;

@end
