@interface PUIFeedManagerArtworkBridge : NSObject {
    void /* unknown type, empty encoding */ imageProvider;
    void /* unknown type, empty encoding */ caches;
    void /* unknown type, empty encoding */ imageStore;
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ imageDownloader;
}

@property (class, nonatomic, retain) PUIFeedManagerArtworkBridge *shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)artworkShouldBeFetchedForPodcastUUID:(id)a0;
- (void)updateArtworkForShow:(id)a0 useBackgroundFetch:(BOOL)a1 fetchUberImage:(BOOL)a2;

@end
