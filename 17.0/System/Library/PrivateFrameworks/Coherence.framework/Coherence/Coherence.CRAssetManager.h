@interface Coherence.CRAssetManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ watchedDirectories;
    void /* unknown type, empty encoding */ assetActor;
    void /* unknown type, empty encoding */ filePresentersQueue;
    void /* unknown type, empty encoding */ addAssetTasks;
    void /* unknown type, empty encoding */ filePresenterURLsOnBackground;
    void /* unknown type, empty encoding */ encryptionDelegate;
    void /* unknown type, empty encoding */ isInBackground;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ temporaryDirectory;
}

- (void)didEnterBackground;
- (void)willEnterForeground;

@end
