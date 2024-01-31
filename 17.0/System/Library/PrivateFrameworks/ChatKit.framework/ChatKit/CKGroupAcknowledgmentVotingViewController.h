@class NSString, NSArray, UITapGestureRecognizer, CKGroupAcknowledgmentVotingLayout, CKAggregateAcknowledgmentChatItem, UIButton, _CKAcknowledgmentVoteCountView, UICollectionView, CKAcknowledgmentVotingViewAnimator;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate>

@property (retain, nonatomic) NSArray *tallies;
@property (retain, nonatomic) CKAggregateAcknowledgmentChatItem *chatItem;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CKGroupAcknowledgmentVotingLayout *layout;
@property (retain, nonatomic) CKAcknowledgmentVotingViewAnimator *animator;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIButton *collapseButton;
@property (retain, nonatomic) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView;
@property (copy, nonatomic) NSArray *sortedAnimatorModelItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)_layoutCollapseButton;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)tapGestureRecognized:(id)a0;
- (void)_animateToLayout:(unsigned long long)a0 aroundSection:(long long)a1;
- (id)_ackIconSupplementaryViewAtIndexPath:(id)a0;
- (void)_collapseCollectionView;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)a0;
- (void)_expandCollectionViewExpandedViewAroundSection:(long long)a0;
- (void)_handleCollapseButton:(id)a0;
- (void)_layoutCurrentlyExpandedVoteCountView;
- (void)_setupTallies;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)a0;
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withGestureRecognizer:(id)a1;
- (id)initWithMessagePartChatItem:(id)a0;

@end
