@class _TtC12GameCenterUI13BasePresenter;

@interface GameCenterUI.DashboardSidebarViewController : GameCenterUI.BaseCollectionViewController {
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ impressionsCalculator;
    void /* unknown type, empty encoding */ dismissHandler;
    void /* unknown type, empty encoding */ statePresenter;
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ diffableDataSource;
    void /* unknown type, empty encoding */ verticalSeparatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sidebarProfileView;
    void /* unknown type, empty encoding */ focusGuide;
}

@property (class, nonatomic, readonly) double horizontalMargin;
@property (class, nonatomic, readonly) double sidebarProfileHorizontalMargin;
@property (class, nonatomic, readonly) double sidebarProfileViewBottomSpace;

@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic) void /* unknown type, empty encoding */ selectionFollowsFocus;
@property (nonatomic, retain) void /* unknown type, empty encoding */ bootstrapPresenter;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ sidebarPresenter;
@property (nonatomic, readonly) _TtC12GameCenterUI13BasePresenter *dataPresenter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ compositionalLayout;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)makeLayout;
- (void)updateBackgroundFor:(long long)a0;

@end
