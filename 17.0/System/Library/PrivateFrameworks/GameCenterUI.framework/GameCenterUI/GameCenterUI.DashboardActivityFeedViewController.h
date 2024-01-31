@interface GameCenterUI.DashboardActivityFeedViewController : GameCenterUI.BaseJetCollectionViewController <GKPlayerAvatarViewDelegate> {
    void /* unknown type, empty encoding */ activityFeedPresenter;
}

- (void)loadMoreWithContinuationToken:(id)a0;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewFrameInsets;
- (id)makeLayout;

@end
