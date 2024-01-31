@class HUCollectionLayoutManager;

@interface HUServicePlaceholderItemModuleController : HUItemModuleController

@property (retain, nonatomic) HUCollectionLayoutManager *collectionLayoutManager;

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (Class)collectionCellClassForItem:(id)a0;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)a0 layoutEnvironment:(id)a1;

@end
