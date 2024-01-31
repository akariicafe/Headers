@interface PXPhotoKitAssetCollectionShowMapActionPerformer : PXPhotoKitAssetCollectionActionPerformer

+ (id)_effectiveAssetsFetchResultWithAssetsFetchResult:(id)a0 assetCollectionReference:(id)a1 dataSource:(id)a2;
+ (BOOL)canPerformActionType:(id)a0 onAssetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)a0 forActivity:(id)a1;
- (id)activitySystemImageName;
- (void)performUserInteractionTask;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
