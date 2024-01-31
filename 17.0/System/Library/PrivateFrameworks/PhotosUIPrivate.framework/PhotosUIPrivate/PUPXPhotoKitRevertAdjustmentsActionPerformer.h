@interface PUPXPhotoKitRevertAdjustmentsActionPerformer : PUPXPhotoKitBatchActionPerformer

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformWithSelectionSnapshot:(id)a0 person:(id)a1;
+ (BOOL)_canRevertOnAsset:(id)a0 fast:(BOOL)a1;

- (void)performUserInteractionTask;
- (BOOL)canPerformOnSubsetOfSelection;

@end
