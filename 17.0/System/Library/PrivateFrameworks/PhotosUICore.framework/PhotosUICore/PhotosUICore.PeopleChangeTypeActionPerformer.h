@interface PhotosUICore.PeopleChangeTypeActionPerformer : PXPhotoKitAssetActionPerformer {
    void /* unknown type, empty encoding */ people;
    void /* unknown type, empty encoding */ bootstrapContext;
    void /* unknown type, empty encoding */ didPresentBootstrap;
}

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)initWithActionType:(id)a0;
- (void)performBackgroundTask;

@end
