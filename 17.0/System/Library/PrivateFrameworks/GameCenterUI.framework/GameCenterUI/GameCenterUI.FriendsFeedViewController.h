@interface GameCenterUI.FriendsFeedViewController : GameCenterUI.BaseJetCollectionViewController <GKPlayerAvatarViewDelegate> {
    void /* unknown type, empty encoding */ activityFeedPresenter;
}

- (void)loadMoreWithContinuationToken:(id)a0;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (void)viewWillLayoutSubviews;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewFrameInsets;
- (id)makeLayout;

@end
