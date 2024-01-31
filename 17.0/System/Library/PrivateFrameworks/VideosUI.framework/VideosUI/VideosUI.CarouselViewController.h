@interface VideosUI.CarouselViewController : UIViewController <TVCarouselViewDelegate, TVCarouselViewDataSource, UIContextMenuInteractionDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ headerViewModel;
    void /* unknown type, empty encoding */ contextMenuInteractor;
    void /* unknown type, empty encoding */ collectionViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visibleCellViewModels;
    void /* unknown type, empty encoding */ $__lazy_storage_$_carouselViewContainer;
    void /* unknown type, empty encoding */ dataModelItems;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ centeredItemIndex;
    void /* unknown type, empty encoding */ selfVisibilityMonitor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellVisibilityMonitor;
}

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)carouselView:(id)a0 cellForItemAtIndex:(unsigned long long)a1;
- (void)carouselView:(id)a0 didCenterItemAtIndex:(unsigned long long)a1;
- (void)carouselView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndex:(unsigned long long)a2;
- (void)carouselView:(id)a0 didSelectItemAtIndex:(unsigned long long)a1;
- (void)carouselView:(id)a0 willDisplayCell:(id)a1 forItemAtIndex:(unsigned long long)a2;
- (void)handleFullscreenPlaybackUIDidChange:(id)a0;
- (unsigned long long)numberOfItemsInCarouselView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)vui_willMoveToParentViewController:(id)a0;

@end
