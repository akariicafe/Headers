@class NSString;

@interface PXPhotoKitAssetCollectionChangePersonSortOrder : PXPhotoKitAssetCollectionActionPerformer

@property (nonatomic, readonly) NSString *activityType;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createStandardActionForAssetCollectionReference:(id)a0 withInput:(id)a1 handler:(id /* block */)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)initWithActionType:(id)a0 assetCollectionReference:(id)a1 displayTitleInfo:(id)a2;

@end
