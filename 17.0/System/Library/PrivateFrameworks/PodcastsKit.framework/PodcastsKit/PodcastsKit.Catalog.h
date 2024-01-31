@interface PodcastsKit.Catalog : NSObject <PKCatalog>

- (id)init;
- (void)fetchEpisodesWithStoreIds:(id)a0 resultsHandler:(id /* block */)a1;
- (void)fetchShowsWithStoreIds:(id)a0 resultsHandler:(id /* block */)a1;

@end
