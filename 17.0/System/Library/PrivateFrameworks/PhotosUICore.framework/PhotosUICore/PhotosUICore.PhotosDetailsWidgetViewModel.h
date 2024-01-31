@interface PhotosUICore.PhotosDetailsWidgetViewModel : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ maxContentSizeCategory;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _spec;
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeWithNotification:(id)a0;

@end
