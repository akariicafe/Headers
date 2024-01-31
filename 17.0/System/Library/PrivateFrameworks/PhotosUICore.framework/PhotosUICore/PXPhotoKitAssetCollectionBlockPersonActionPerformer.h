@class PXSuggestLessPeopleHelper;

@interface PXPhotoKitAssetCollectionBlockPersonActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXSuggestLessPeopleHelperDelegate> {
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (BOOL)isActionDestructive;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (BOOL)suggestLessPeopleHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)suggestLessPeopleHelper:(id)a0 presentViewController:(id)a1;

@end
