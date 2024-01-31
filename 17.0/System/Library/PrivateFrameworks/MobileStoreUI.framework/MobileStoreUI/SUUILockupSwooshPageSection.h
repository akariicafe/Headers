@class SUUILockupSwooshViewController, NSString, SUUILockupSwooshArtworkLoader, SUUIMissingItemLoader, SUUIProductPageOverlayController, SUUISwooshPageComponent;

@interface SUUILockupSwooshPageSection : SUUIStorePageSection <SUUIMissingItemDelegate, SUUIProductPageOverlayDelegate, SUUISwooshViewControllerDelegate> {
    SUUILockupSwooshArtworkLoader *_artworkLoader;
    SUUIMissingItemLoader *_missingItemLoader;
    SUUIProductPageOverlayController *_overlayController;
    long long _overlaySourceIndex;
    SUUILockupSwooshViewController *_swooshViewController;
}

@property (readonly, nonatomic) SUUISwooshPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)_addImpressionForItemIndex:(long long)a0 toSession:(id)a1;
- (id)_artworkLoader;
- (void)_loadMissingItemsFromIndex:(long long)a0 withReason:(long long)a1;
- (id)_missingItemLoader;
- (id)_popSourceViewForOverlayController:(id)a0;
- (void)_showProductPageForItem:(id)a0 index:(long long)a1 animated:(BOOL)a2;
- (id)_swooshViewController;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (void)prefetchResourcesWithReason:(long long)a0;
- (id)productPageOverlay:(id)a0 flipSourceViewToDismissItem:(id)a1;
- (id)productPageOverlay:(id)a0 flipSourceViewToPresentItem:(id)a1;
- (void)productPageOverlayDidDismiss:(id)a0;
- (void)setImage:(id)a0 forRequest:(id)a1;
- (void)swoosh:(id)a0 didSelectCellAtIndex:(long long)a1;
- (id)swoosh:(id)a0 imageForCellAtIndex:(long long)a1;
- (id)swoosh:(id)a0 videoThumbnailForCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 willDisplayCellAtIndex:(long long)a1;
- (void)swooshDidSelectSeeAll:(id)a0;
- (void)willAppearInContext:(id)a0;

@end
