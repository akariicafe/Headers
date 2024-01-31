@interface FocusSettingsUI.WatchFaceSettingsManager : NSObject <NTKFaceCollectionObserver> {
    void /* unknown type, empty encoding */ collection;
    void /* unknown type, empty encoding */ snapshotter;
    void /* unknown type, empty encoding */ onLoad;
    void /* unknown type, empty encoding */ faceImagesCache;
    void /* unknown type, empty encoding */ $__lazy_storage_$_watchNPSManager;
    void /* unknown type, empty encoding */ _watchFaceDomainAccessor;
}

- (id)init;
- (void)faceCollectionDidLoad:(id)a0;
- (void).cxx_destruct;

@end
