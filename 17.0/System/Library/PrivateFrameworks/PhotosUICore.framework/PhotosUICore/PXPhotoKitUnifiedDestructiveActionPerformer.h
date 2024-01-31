@interface PXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer

+ (id)createBarButtonItemWithTarget:(id)a0 action:(SEL)a1 actionManager:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (id)_containedPerformerClasses;
+ (id)_localizedTitleForAsset:(id)a0 titleUseCase:(unsigned long long)a1 key:(id)a2;
+ (id)_localizedTitleForAssets:(id)a0 titleUseCase:(unsigned long long)a1 key:(id)a2;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;
+ (BOOL)canPerformOnSubsetOfSelection;

- (void)performUserInteractionTask;
- (void)_handleActionPickForPerformerClass:(Class)a0;
- (BOOL)_isDestructiveAction:(Class)a0;

@end
