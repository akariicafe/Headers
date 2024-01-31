@class PXStoryChapterCollectionManager, NSArray;

@interface PXStoryChapterCollectionAction : PXAction

@property (readonly, nonatomic) PXStoryChapterCollectionManager *chapterCollectionManager;
@property (readonly, nonatomic) NSArray *edits;
@property (readonly, nonatomic) NSArray *originalChapters;

- (id)init;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithChapterCollectionManager:(id)a0 deleteChapterWithIdentifier:(id)a1;
- (id)initWithChapterCollectionManager:(id)a0 editChapterWithIdentifier:(id)a1 changeRequest:(id /* block */)a2;
- (id)initWithChapterCollectionManager:(id)a0 edits:(id)a1;
- (id)initWithChapterCollectionManager:(id)a0 insertChapterWithFirstAsset:(id)a1 configuration:(id /* block */)a2;
- (void)performUndo:(id /* block */)a0;

@end
