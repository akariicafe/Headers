@class _TtC12GameCenterUI13BasePresenter;

@interface GameCenterUI.BaseJetCollectionViewController : GameCenterUI.BaseCollectionViewController {
    void /* unknown type, empty encoding */ dismissHandler;
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ statePresenter;
    void /* unknown type, empty encoding */ primaryImpressionsCalculator;
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ diffableDataSource;
}

@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, retain) void /* unknown type, empty encoding */ bootstrapPresenter;
@property (nonatomic, readonly) _TtC12GameCenterUI13BasePresenter *dataPresenter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ compositionalLayout;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewFrameInsets;
- (id)makeLayout;

@end
