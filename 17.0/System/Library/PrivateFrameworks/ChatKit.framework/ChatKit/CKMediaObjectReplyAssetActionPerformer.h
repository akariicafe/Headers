@interface CKMediaObjectReplyAssetActionPerformer : CKMediaObjectAssetActionPerformer

+ (BOOL)canPerformOnImplicitSelection;
+ (BOOL)canPerformWithActionManager:(id)a0 selectionSnapshot:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;

- (void)performUserInteractionTask;

@end
