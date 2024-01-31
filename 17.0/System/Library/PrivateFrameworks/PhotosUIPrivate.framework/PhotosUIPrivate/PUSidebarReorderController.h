@class UICollectionViewDiffableDataSource, PXSidebarOutlineSectionController;
@protocol PXNavigationListItem;

@interface PUSidebarReorderController : NSObject

@property (retain, nonatomic) id<PXNavigationListItem> itemToReorder;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) PXSidebarOutlineSectionController *sidebarOutlineSectionController;

- (void).cxx_destruct;
- (BOOL)canReorderItem:(id)a0;
- (id)initWithDataSource:(id)a0 outlineSectionController:(id)a1;
- (void)performReorderWithTransaction:(id)a0;
- (id)targetIndexPathForMoveFromItemAtIndexPath:(id)a0 toProposedIndexPath:(id)a1;

@end
