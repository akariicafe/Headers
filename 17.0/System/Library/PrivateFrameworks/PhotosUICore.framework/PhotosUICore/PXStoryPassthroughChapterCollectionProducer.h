@class PXStoryChapterCollectionManager;

@interface PXStoryPassthroughChapterCollectionProducer : NSObject <PXStoryChapterCollectionProducer>

@property (readonly, nonatomic) PXStoryChapterCollectionManager *chapterCollectionManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithChapterCollectionManager:(id)a0;
- (id)requestChapterCollectionForKeyAsset:(id)a0 curatedAssets:(id)a1 options:(unsigned long long)a2 resultHandler:(id /* block */)a3;

@end
