@interface PXStoryDummyDailyChapterCollectionProducer : PXStoryTransientChapterCollectionProducer

@property (readonly, nonatomic) long long dayInterval;

- (id)initWithDayInterval:(long long)a0 storyQueue:(id)a1;
- (id)initWithStoryQueue:(id)a0;
- (id)workQueue_uneditedChapterCollectionWithAssets:(id)a0 keyAsset:(id)a1;

@end
