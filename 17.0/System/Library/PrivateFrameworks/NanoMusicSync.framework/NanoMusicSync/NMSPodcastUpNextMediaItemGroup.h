@class NSArray;

@interface NMSPodcastUpNextMediaItemGroup : NMSMediaItemGroup {
    NSArray *_upNextEpisodes;
    NSArray *_upNextFeedURLs;
}

- (void).cxx_destruct;
- (id)itemList;
- (id)_upNextEpisodes;
- (id)_upNextFeedURLs;
- (id)identifiersForContainerType:(unsigned long long)a0;

@end
