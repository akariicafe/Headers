@class NSString, UICollectionView, CKAppStripLayout, UIView, NSTimer, UILongPressGestureRecognizer;
@protocol CKAppStripPredictiveTypeTransition, CKBrowserSwitcherFooterViewDelegate, CKBrowserSwitcherFooterViewDataSource;

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate> {
    UICollectionView *_appStripCollectionView;
    UIView *_predictiveTypeSnapshotView;
    UIView *_visibleView;
    id<CKAppStripPredictiveTypeTransition> _animator;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _minifiedContentInsets;
    BOOL _isDoingMagnificationAnimation;
    BOOL _isMagnificationEnabled;
    BOOL _ignoreDataSourceChanges;
    NSTimer *_minificationTimer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UILongPressGestureRecognizer *_touchTracker;
    BOOL _hasTouches;
}

@property (retain, nonatomic) UIView *grayLine;
@property (weak, nonatomic) id<CKBrowserSwitcherFooterViewDelegate> delegate;
@property (weak, nonatomic) id<CKBrowserSwitcherFooterViewDataSource> dataSource;
@property (nonatomic) BOOL isMagnified;
@property (nonatomic) BOOL scrollsLastUsedAppIconIntoView;
@property (nonatomic) BOOL hideShinyStatus;
@property (nonatomic) BOOL showBorders;
@property (nonatomic) BOOL toggleBordersOnInterfaceStyle;
@property (retain, nonatomic) CKAppStripLayout *appStripLayout;
@property (readonly, nonatomic) UICollectionView *appStripCollectionView;
@property (nonatomic) BOOL minifiesOnSelection;
@property (nonatomic) BOOL isMinifyingOnTranscriptScroll;
@property (nonatomic) double snapshotVerticalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToSuperview:(id)a0;
- (double)contentHeight;
- (void)clearSelection;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (id)collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)reloadData;
- (BOOL)collectionView:(id)a0 canMoveItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateVisibilityState;
- (void)adjustMagnificationAtPoint:(struct CGPoint { double x0; double x1; })a0 minifyImmediately:(BOOL)a1;
- (void)animateAppStripVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)appsLongPressed:(id)a0;
- (double)contentHeightForCameraApps;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toggleBordersOnInterfaceStyle:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForAppStrip;
- (void)installedAppsChanged:(id)a0;
- (void)minifyImmediately:(BOOL)a0;
- (void)resetScrollPosition;
- (void)selectPluginAtIndexPath:(id)a0;
- (void)setInitiallySelectedPluginIfNeeded;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForFocusPoint:(struct CGPoint { double x0; double x1; })a0 initialLayoutMode:(unsigned long long)a1 finalLayoutMode:(unsigned long long)a2;
- (void)touchTrackerTrackedTouches:(id)a0;
- (void)transcriptCollectionStartedScrolling:(id)a0;
- (void)updateBrowserCell:(id)a0;
- (void)updateCollectionView:(id)a0;
- (void)updatePredictiveTypeSnapshot:(id)a0;
- (void)visibleAppsChanges:(id)a0;

@end
