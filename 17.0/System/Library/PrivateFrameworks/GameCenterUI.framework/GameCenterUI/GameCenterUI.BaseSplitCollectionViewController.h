@class _TtC12GameCenterUI18BaseSplitPresenter;

@interface GameCenterUI.BaseSplitCollectionViewController : GameCenterUI.BaseJetCollectionViewController {
    void /* unknown type, empty encoding */ secondaryImpressionsCalculator;
    void /* unknown type, empty encoding */ currentLayoutType;
    void /* unknown type, empty encoding */ secondaryDiffableDataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateCollectionViewConstraintOnce;
}

@property (class, nonatomic, readonly) double topInsetWithCustomHeader;
@property (class, nonatomic, readonly) double topAndBottomInsetForCustomHeader;
@property (class, nonatomic, readonly) double leadingAndTrailingInsetForCustomHeader;
@property (class, nonatomic, readonly) double customHeaderHeight;
@property (class, nonatomic, readonly) double mainCollectionViewWidth;

@property (nonatomic, retain) void /* unknown type, empty encoding */ secondaryCollectionView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ leftPaneBackgroundView;
@property (nonatomic, readonly) double mainSecondaryCollectionViewSpacing;
@property (nonatomic, readonly) BOOL shouldDisplayInSplitView;
@property (nonatomic) void /* unknown type, empty encoding */ shouldDisplayCustomHeader;
@property (nonatomic, retain) void /* unknown type, empty encoding */ secondaryCompositionalLayout;
@property (nonatomic, readonly) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;

- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)loadView;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewFrameInsets;
- (void)mainSecondaryCollectionViewLayout;
- (id)makeSecondaryLayout;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })secondaryCollectionViewFrameInsets;

@end
