@class _TtC12GameCenterUI13BasePresenter;

@interface GameCenterUI.FriendsListViewController : GameCenterUI.BaseJetCollectionViewController <UISearchResultsUpdating, UISearchControllerDelegate> {
    void /* unknown type, empty encoding */ friendsPresenter;
    void /* unknown type, empty encoding */ searchController;
}

@property (nonatomic, retain) _TtC12GameCenterUI13BasePresenter *dataPresenter;

- (void)didDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewFrameInsets;
- (id)makeLayout;

@end
