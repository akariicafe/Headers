@interface PXPhotoKitAssetCollectionContentSyndicationRemoveSuggestionActionPerformer : PXPhotoKitAssetCollectionActionPerformer

@property (nonatomic) BOOL shouldSkipUserConfirmation;

+ (id)_mediaSpecificMessageForKeyPrefix:(id)a0 forAssets:(id)a1;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createBarButtonItemForAssetCollectionReference:(id)a0 withTarget:(id)a1 action:(SEL)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (id)_assetsFromAssetCollection;
- (void)performBackgroundTask;

@end
