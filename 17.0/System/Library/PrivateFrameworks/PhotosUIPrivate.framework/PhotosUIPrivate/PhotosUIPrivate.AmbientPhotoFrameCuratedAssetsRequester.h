@interface PhotosUIPrivate.AmbientPhotoFrameCuratedAssetsRequester : NSObject <PXPassiveContentDataSourceChangeObserver, PXPassiveContentPeoplePickerDataSourceChangeObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_smartAlbumDataSource;
    void /* unknown type, empty encoding */ maxAssets;
    void /* unknown type, empty encoding */ randomSeed;
    void /* unknown type, empty encoding */ restrictToSmartAlbumTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_peoplePickerDataSource;
    void /* unknown type, empty encoding */ assetsContinuation;
    void /* unknown type, empty encoding */ photoLibrary;
}

- (id)init;
- (void).cxx_destruct;
- (void)passiveContentDataSourceAvailableTypesDidChange:(id)a0;
- (void)passiveContentDataSourcePreviewAssetsDidChange:(id)a0;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)a0;

@end
