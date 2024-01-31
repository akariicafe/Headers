@class PXSuggestLessPeopleHelper;

@interface PXPhotoKitFeatureLessActionPerformer : PXPhotoKitAssetActionPerformer <PXSuggestLessPeopleHelperDelegate> {
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}

+ (id)localizedTitleForUseCase:(unsigned long long)a0 actionManager:(id)a1;
+ (id)systemImageNameForActionManager:(id)a0;
+ (id)_facesInCurrentAsset:(id)a0;
+ (id)_personFromFace:(id)a0 asset:(id)a1;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)_personFromFace:(id)a0;
- (BOOL)suggestLessPeopleHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)suggestLessPeopleHelper:(id)a0 presentViewController:(id)a1;

@end
