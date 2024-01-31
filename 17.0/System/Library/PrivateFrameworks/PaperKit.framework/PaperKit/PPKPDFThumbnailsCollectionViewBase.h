@class NSString, UICollectionView, PPKPDFThumbnailViewBase, UICollectionViewDiffableDataSource, UIView, PKDisplayLinkObserver;

@interface PPKPDFThumbnailsCollectionViewBase : UIView <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, UIContextMenuInteractionDelegate> {
    UICollectionViewDiffableDataSource *_dataSource;
    UIView *_backgroundOnePixelView;
    PKDisplayLinkObserver *_displayLinkObserver;
    BOOL _isApplyingCollectionViewTransaction;
}

@property (weak, nonatomic) PPKPDFThumbnailViewBase *thumbnailView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL allowsPageReordering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)collectionView:(id)a0 dragSessionDidEnd:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (long long)_collectionView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionView:(id)a0 dragSessionWillBegin:(id)a1;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)currentPage;
- (id)collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)_updateScrubber;
- (BOOL)_canEditDocument;
- (void)_insertFileAtURL:(id)a0 type:(id)a1 atIndex:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_selectAndScrollToCurrentPageIfNeeded;
- (void)_updateActionsButtonVisibilityAtIndexPath:(id)a0;
- (void)applySnapshotWithAnimation:(BOOL)a0;
- (void)configureCell:(id)a0 withPage:(id)a1 indexPath:(id)a2;
- (id)contextMenuForBackgroundAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)contextMenuForPage:(id)a0;
- (void)currentPageChanged:(id)a0;
- (void)documentChanged:(id)a0;
- (void)documentMutated:(id)a0;
- (id)initFromThumbnailView:(id)a0;
- (id)itemsForDragWithSession:(id)a0 atIndexPath:(id)a1;
- (id)makeDatasource;
- (void)movePageWithTransaction:(id)a0;
- (void)pageChanged:(id)a0;
- (id)previewForCollectionView:(id)a0 contextMenuInteraction:(id)a1;
- (id)previewForCollectionView:(id)a0 indexPath:(id)a1;
- (void)reloadPage:(id)a0;
- (void)reloadPageAt:(long long)a0;
- (BOOL)shouldDisplayActionButtonForPage:(id)a0;
- (id)supportedUTTypes;
- (void)updateIconsImages;
- (void)updateImageForCell:(id)a0 indexPath:(id)a1 page:(id)a2;

@end
