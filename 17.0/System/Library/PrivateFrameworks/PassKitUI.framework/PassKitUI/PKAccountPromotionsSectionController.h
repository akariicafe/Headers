@class NSString, PKAccountService, NSArray, PKRemoteImagePreparer, PKAccountPromotionsPresenter, PKAccountPromotionBehavior, NSMutableSet, PKAccount, UICollectionViewCellRegistration;
@protocol PKRewardsHubSectionControllerDelegate;

@interface PKAccountPromotionsSectionController : NSObject <PKAccountServiceObserver, PKDynamicSectionController, PKViewControllerPreflightable> {
    PKAccount *_account;
    PKAccountService *_accountService;
    id<PKRewardsHubSectionControllerDelegate> _delegate;
    NSArray *_items;
    PKAccountPromotionsPresenter *_presenter;
    PKAccountPromotionBehavior *_promotionBehavior;
    NSArray *_orderings;
    NSMutableSet *_promotionsViewedSinceViewLoad;
    PKRemoteImagePreparer *_remoteImagePreparer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _itemsLock;
}

@property (retain, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;

- (void)setItems:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)itemsCopy;
- (void)didUpdateAccountPromotions:(id)a0 accountIdentifier:(id)a1;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_promotionsWithOrderingContext:(unsigned long long)a0;
- (void)_clearViewedPromotions;
- (void)_configureDataSource;
- (id)_promotionsWithDefaultOrdering;
- (void)_reloadDataWithCompletion:(id /* block */)a0;
- (BOOL)_updateImpressionCountForItem:(id)a0 shouldCountAsImpression:(BOOL)a1;
- (void)_updateImpressionCountsForAllItems:(id)a0 shouldCountAsImpression:(BOOL)a1;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)initWithSectionIdentifier:(id)a0 account:(id)a1 accountService:(id)a2 delegate:(id)a3;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)promotionForProgramIdentifier:(id)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;
- (void)willDisplayItem:(id)a0;

@end
