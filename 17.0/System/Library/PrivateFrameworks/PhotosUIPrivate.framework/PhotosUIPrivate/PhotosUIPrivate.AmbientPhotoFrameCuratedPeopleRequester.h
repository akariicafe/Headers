@interface PhotosUIPrivate.AmbientPhotoFrameCuratedPeopleRequester : NSObject <PXPassiveContentPeoplePickerDataSourceChangeObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_peoplePickerDataSource;
    void /* unknown type, empty encoding */ assetsContinuation;
    void /* unknown type, empty encoding */ photoLibrary;
}

- (id)init;
- (void).cxx_destruct;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)a0;

@end
