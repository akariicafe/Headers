@interface ConversationKit.ParticipantListViewController : UIViewController <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionViewDataSource;
    void /* unknown type, empty encoding */ participantListLayout;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ lastLayedOutViewSize;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantListViewControllerDelegate;
}

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityParticipantCollectionView;

@end
