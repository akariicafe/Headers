@class KVItemBuilder;

@interface KVPodcastItemBuilder : NSObject {
    KVItemBuilder *_builder;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)playlistItemWithName:(id)a0 itemId:(id)a1 error:(id *)a2;
- (id)podcastItemWithTitle:(id)a0 itemId:(id)a1 artistName:(id)a2 error:(id *)a3;
- (id)_buildItemWithError:(id *)a0;

@end
