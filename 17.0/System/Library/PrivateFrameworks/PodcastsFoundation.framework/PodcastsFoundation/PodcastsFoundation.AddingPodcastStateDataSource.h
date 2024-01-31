@interface PodcastsFoundation.AddingPodcastStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ refreshQueue;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ currentlyAddingShows;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateAddingShowsWithStoreCollectionIds:(id)a0;

@end
