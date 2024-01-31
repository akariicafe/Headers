@class UIView, UIMenu, NSString, _UIContextMenuSelectionGestureRecognizer, _UIEditMenuPageButton, CAShapeLayer, _UIDiffuseShadowView, UICollectionViewDiffableDataSource, _UIEditMenuCollectionView, NSIndexPath;
@protocol _UIEditMenuListViewDelegate;

@interface _UIEditMenuListView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    NSString *_backgroundMaterialGroupName;
    double _largestPageWidth;
    double _verticalContentHeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    struct { unsigned char pagination : 1; } _needsUpdate;
}

@property (readonly, nonatomic) UIView *customBackgroundPlatterView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) _UIDiffuseShadowView *shadowView;
@property (readonly, nonatomic) CAShapeLayer *maskLayer;
@property (readonly, nonatomic) UIView *menuContainerView;
@property (readonly, nonatomic) _UIEditMenuCollectionView *collectionView;
@property (readonly, nonatomic) UIView *titleContainerView;
@property (readonly, nonatomic) UIView *titleSeparatorView;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) _UIEditMenuPageButton *leftButton;
@property (readonly, nonatomic) _UIEditMenuPageButton *rightButton;
@property (readonly, nonatomic) _UIContextMenuSelectionGestureRecognizer *selectionGestureRecognizer;
@property (readonly, nonatomic) BOOL scrubbingEnabled;
@property (retain, nonatomic) NSIndexPath *highlightedIndexPath;
@property (retain, nonatomic) NSIndexPath *hoveredIndexPath;
@property (retain, nonatomic) NSIndexPath *scrubbedIndexPath;
@property (readonly, weak, nonatomic) id<_UIEditMenuListViewDelegate> delegate;
@property (nonatomic) long long arrowDirection;
@property (nonatomic) long long axis;
@property (readonly, nonatomic) UIView *titleView;
@property (readonly, nonatomic) UIMenu *displayedMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimumRequiredWidthForArrowInRoundedListViewForAxis:(long long)a0 traitCollection:(id)a1;

- (void)_handleHoverGesture:(id)a0;
- (void)_contentSizeCategoryDidChange;
- (BOOL)hasShadow;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)_indexPathForGestureRecognizer:(id)a0;
- (BOOL)_canSelectItemAtIndexPath:(id)a0;
- (double)_collectionViewWidthForPageProgress:(double)a0;
- (void)_createDataSource;
- (void)_createViewHierarchy;
- (void)_didTapLeftDirectionalButton:(id)a0;
- (void)_didTapRightDirectionalButton:(id)a0;
- (void)_handleSelectionGesture:(id)a0;
- (BOOL)_hasDisplayedMenu;
- (BOOL)_hasPasteAuthentication;
- (void)_highlightItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicHorizontalContentSizeForTraitCollection:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })_intrinsicVerticalContentSizeForContainer:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (double)_minimumRequiredWidthForArrowInRoundedListViewForAxis:(long long)a0;
- (void)_reloadMenuAnimated:(BOOL)a0;
- (void)_selectItemAtIndexPath:(id)a0;
- (void)_setNeedsPaginationUpdate;
- (struct CGSize { double x0; double x1; })_titleViewSizeForFittingWidth:(double)a0;
- (void)_unhighlightCurrentlyHighlightedItem;
- (void)_updateArrowEdgeInsets;
- (void)_updateHighlightState;
- (void)_updateMaskingLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updatePaginationForSnapshot:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })_verticalMenuContentSizeFittingContainerSize:(struct CGSize { double x0; double x1; })a0 traits:(id)a1;
- (struct CGSize { double x0; double x1; })arrowSizeForDirection:(long long)a0;
- (id)backgroundMaterialGroupName;
- (id)initWithDelegate:(id)a0 menu:(id)a1 titleView:(id)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForContainer:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)reloadWithMenu:(id)a0 titleView:(id)a1 animated:(BOOL)a2;
- (void)setScrubbingEnabled:(BOOL)a0;

@end
