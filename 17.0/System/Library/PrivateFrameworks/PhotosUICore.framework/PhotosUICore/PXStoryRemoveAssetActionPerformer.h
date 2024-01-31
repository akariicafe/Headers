@interface PXStoryRemoveAssetActionPerformer : PXStoryAssetActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (id)createPreviewActionWithTitle:(id)a0 image:(id)a1 handler:(id /* block */)a2;

- (void)performUserInteractionTask;
- (BOOL)shouldPreventTargetedDismissalAnimation;

@end
