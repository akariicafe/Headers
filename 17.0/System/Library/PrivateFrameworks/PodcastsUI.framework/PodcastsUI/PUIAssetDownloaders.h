@interface PUIAssetDownloaders : NSObject {
    void /* unknown type, empty encoding */ backgroundArtworkDownloader;
    void /* unknown type, empty encoding */ backgroundArtworkSource;
    void /* unknown type, empty encoding */ storeArtworkSource;
    void /* unknown type, empty encoding */ libraryArtworkSource;
}

@property (class, nonatomic, readonly) PUIAssetDownloaders *sharedDownloaders;

- (id)init;
- (void).cxx_destruct;
- (void)registerBackgroundCompletion:(id /* block */)a0 forSession:(id)a1;

@end
