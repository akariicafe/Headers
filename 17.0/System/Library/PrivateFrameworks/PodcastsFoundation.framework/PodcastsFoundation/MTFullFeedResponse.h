@interface MTFullFeedResponse : PodcastsFoundation.BaseFeedResponse {
    void /* unknown type, empty encoding */ fullFeedRequest;
}

- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)itemInSection:(long long)a0 row:(long long)a1;
- (id)itemsFor:(long long)a0;

@end
