@class NSString, UITapGestureRecognizer, CKAttributionStickerDetailsView, UIButton, CKAttributionCollectionViewLayout, UICollectionView, CKAttributionImageAndCountView, CKMessagePartChatItem, CKAttributionViewControllerDataModel;
@protocol CKAttributionViewControllerDelegate;

@interface CKAttributionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAttributionStickerDetailsViewDelegate>

@property (readonly, nonatomic) CKAttributionCollectionViewLayout *layout;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UIButton *collapseButton;
@property (readonly, nonatomic) CKAttributionImageAndCountView *expandedVoteCountView;
@property (readonly, nonatomic) CKAttributionStickerDetailsView *stickerDetailsView;
@property (weak, nonatomic) id<CKAttributionViewControllerDelegate> delegate;
@property (readonly, nonatomic) CKMessagePartChatItem *messagePartChatItem;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) CKAttributionViewControllerDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)_iconViewAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)tapGestureRecognized:(id)a0;
- (void)_animateStickerViewToVisible:(BOOL)a0 completion:(id /* block */)a1;
- (void)_animateToExpandedMode:(BOOL)a0 forSection:(long long)a1;
- (void)_animateToStickerDetails:(BOOL)a0 forSection:(long long)a1 item:(long long)a2;
- (BOOL)_canAnimateToStickerDetailsForSection:(long long)a0;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)a0;
- (void)_handleCollapseButton:(id)a0;
- (BOOL)_updateCollectionViewFrameForLayoutMode:(long long)a0;
- (void)_updateScrollEnabled;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)a0;
- (void)attributionStickerDetailsView:(id)a0 deleteButtonWasPressedForStickerChatItem:(id)a1;
- (void)attributionStickerDetailsView:(id)a0 downloadButtonWasPressedForStickerChatItem:(id)a1;
- (void)attributionStickerDetailsView:(id)a0 showInAppStoreButtonWasPressedForStickerChatItem:(id)a1;
- (id)initWithMessagePartChatItem:(id)a0;
- (void)performAppearingAnimationWithDelay:(double)a0 completion:(id /* block */)a1;

@end
