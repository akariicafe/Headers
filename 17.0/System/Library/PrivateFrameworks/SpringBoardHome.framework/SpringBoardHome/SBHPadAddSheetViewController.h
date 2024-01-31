@class UISplitViewController, SBHWidgetSearchController, SBHAddWidgetSheetViewController, NSArray, UIView, NSMutableDictionary, NSString, MTMaterialView;
@protocol SBHWidgetDragHandling, SBHWidgetSheetViewControllerPresenter;

@interface SBHPadAddSheetViewController : SBHAddWidgetSheetViewControllerBase <SBHAddWidgetSheetViewControllerDelegate, SBHMainAddSheetViewControlling> {
    NSMutableDictionary *_userInfo;
    struct SBHPadAddWidgetSheetMetrics { double sheetMargin; double leadingPadding; double sidebarWidth; double gutterPadding; double trailingPadding; double topPadding; double widgetScaleFactor; struct CGSize { double width; double height; } scaledWidgetSize; unsigned long long widgetColumns; struct CGSize { double width; double height; } detailWidgetPadding; double detailAddButtonTopSpacing; double detailAddButtonBottomSpacing; double detailPageControlTopSpacing; } _landscapeMetrics;
    struct SBHPadAddWidgetSheetMetrics { double sheetMargin; double leadingPadding; double sidebarWidth; double gutterPadding; double trailingPadding; double topPadding; double widgetScaleFactor; struct CGSize { double width; double height; } scaledWidgetSize; unsigned long long widgetColumns; struct CGSize { double width; double height; } detailWidgetPadding; double detailAddButtonTopSpacing; double detailAddButtonBottomSpacing; double detailPageControlTopSpacing; } _portraitMetrics;
    BOOL _allowsFakeWidgets;
    unsigned long long _addWidgetSheetLocation;
}

@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) UISplitViewController *splitViewController;
@property (retain, nonatomic) SBHAddWidgetSheetViewController *left;
@property (retain, nonatomic) NSMutableDictionary *suggestedItemsByGalleryLayoutSize;
@property (retain, nonatomic) SBHWidgetSearchController *widgetSearchController;
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers;
@property (retain, nonatomic) UIView *redBox;
@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) BOOL wantsBottomAttachedPresentation;
@property (nonatomic) BOOL wantsCloseButton;
@property (nonatomic) BOOL wantsSeparator;
@property (readonly, weak, nonatomic) id<SBHWidgetDragHandling> widgetDragHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *applicationWidgetCollections;
@property (retain, nonatomic) NSArray *favoredApplicationWidgetCollections;
@property (retain, nonatomic) NSArray *disfavoredApplicationWidgetCollections;
@property (weak, nonatomic) id<SBHWidgetSheetViewControllerPresenter> presenter;
@property (nonatomic) unsigned long long galleryLayoutSize;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (unsigned long long)addWidgetSheetLocation;
- (id)addWidgetSheetViewController:(id)a0 detailViewControllerForWidgetCollection:(id)a1;
- (void)addWidgetSheetViewController:(id)a0 didSelectWidgetIconView:(id)a1;
- (void)addWidgetSheetViewControllerDidAppear:(id)a0;
- (void)addWidgetSheetViewControllerDidCancel:(id)a0;
- (void)addWidgetSheetViewControllerDidDisappear:(id)a0;
- (void)addWidgetSheetViewControllerWillAppear:(id)a0;
- (void)addWidgetSheetViewControllerWillDisappear:(id)a0;
- (id)backgroundViewMatchingMaterialBeneathAddWidgetSheetViewController:(id)a0;
- (void)closeButtonTapped:(id)a0;
- (id)galleryViewControllerForAddWidgetSheetViewController:(id)a0;
- (void)setAddWidgetSheetLocation:(unsigned long long)a0;
- (void)setAllowsFakeWidgets:(BOOL)a0;
- (void)setSuggestedItems:(id)a0 forGalleryLayoutSize:(unsigned long long)a1;
- (id)suggestedItemsForGalleryLayoutSize:(unsigned long long)a0;
- (id)_detailViewController;
- (double)_columnSpacing;
- (void)_layoutSearchBarGradientMaskLayers;
- (void)_layoutSeparatorView;
- (struct SBHPadAddWidgetSheetMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; struct CGSize { double x0; double x1; } x7; unsigned long long x8; struct CGSize { double x0; double x1; } x9; double x10; double x11; double x12; })_metricsForOrientation:(long long)a0;
- (id)_newBackgroundView;
- (unsigned long long)_numberOfWidgetColumnsThatFitInWidth:(double)a0;
- (double)_paddedSidebarWidthForInterfaceOrientation:(long long)a0;
- (double)_widthNeededForWidgetColumns:(unsigned long long)a0;
- (BOOL)allowsFakeWidgets;
- (void)configureViewsForInterfaceOrientation:(long long)a0;
- (id)initWithListLayoutProvider:(id)a0 iconViewProvider:(id)a1 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x0; BOOL x1; BOOL x2; })a2 appCellConfigurator:(id)a3 addWidgetSheetStyle:(unsigned long long)a4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredInsetsForSheetPresentationInInterfaceOrientation:(long long)a0;
- (void)setAddWidgetSheetWidgetBackgroundType:(unsigned long long)a0;

@end
