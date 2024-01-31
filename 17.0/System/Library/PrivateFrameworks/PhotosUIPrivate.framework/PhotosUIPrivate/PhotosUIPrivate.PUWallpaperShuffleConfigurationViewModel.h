@interface PhotosUIPrivate.PUWallpaperShuffleConfigurationViewModel : NSObject <PXPassiveContentDataSourceChangeObserver, PXPassiveContentPeoplePickerDataSourceChangeObserver> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ contentMode;
    void /* unknown type, empty encoding */ posterConfiguration;
    void /* unknown type, empty encoding */ finishHandler;
    void /* unknown type, empty encoding */ cancelHandler;
    void /* unknown type, empty encoding */ showAssetPreviews;
    void /* unknown type, empty encoding */ centerMedia;
    void /* unknown type, empty encoding */ presentationState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_assetPreviewViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_smartAlbumDataSource;
    void /* unknown type, empty encoding */ _selectedSmartAlbumsType;
    void /* unknown type, empty encoding */ _availableSmartAlbums;
    void /* unknown type, empty encoding */ _isFinishingWithFeaturedPhotos;
    void /* unknown type, empty encoding */ peoplePickerHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_peoplePickerDataSource;
    void /* unknown type, empty encoding */ availableShuffleFrequencies;
    void /* unknown type, empty encoding */ _selectedShuffleFrequencyType;
    void /* unknown type, empty encoding */ manualSelectionPhotoPickerHandler;
    void /* unknown type, empty encoding */ manuallySelectedAssetIdentifiers;
}

- (void)passiveContentDataSourceAvailableTypesDidChange:(id)a0;
- (void)passiveContentDataSourcePreviewAssetsDidChange:(id)a0;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
