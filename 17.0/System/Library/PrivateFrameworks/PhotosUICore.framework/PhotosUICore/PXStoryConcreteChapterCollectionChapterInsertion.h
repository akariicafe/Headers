@protocol PXDisplayAsset;

@interface PXStoryConcreteChapterCollectionChapterInsertion : NSObject <PXStoryChapterCollectionChapterInsertion>

@property (readonly, nonatomic) id<PXDisplayAsset> firstAsset;
@property (readonly, nonatomic) id /* block */ chapterConfiguration;
@property (readonly, nonatomic) long long kind;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFirstAsset:(id)a0 chapterConfiguration:(id /* block */)a1;

@end
