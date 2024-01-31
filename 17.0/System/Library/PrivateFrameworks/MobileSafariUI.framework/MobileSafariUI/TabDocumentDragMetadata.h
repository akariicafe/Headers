@class TabDocument;
@protocol TabCollectionView;

@interface TabDocumentDragMetadata : NSObject

@property (readonly, weak, nonatomic) id<TabCollectionView> sourceTabView;
@property (readonly, nonatomic) TabDocument *tabDocument;

- (void).cxx_destruct;
- (id)initWithTabDocument:(id)a0 sourceTabView:(id)a1;

@end
