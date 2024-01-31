@interface PXPhotoKitAssetCollectionBlacklistMemoryActionPerformer : PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (BOOL)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (BOOL)_didUserConfirmDeleteOfMemory;
- (BOOL)_doesUserActionRequireDisambiguation:(id)a0 outResolvedAction:(id *)a1 outAlertActionsForDisambiguation:(id *)a2 alertActionHandler:(id /* block */)a3;
- (void)performBackgroundTask;

@end
