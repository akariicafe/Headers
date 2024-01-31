@class NSMutableDictionary, NSArray, NSString, PKAccountRewardsTierSummary, NSMutableSet, UICollectionViewCellRegistration, PKRewardsSummaryFetcher;
@protocol PKRewardsHubSectionControllerDelegate, PKPaymentDataProvider;

@interface PKRewardsHubSummarySectionController : NSObject <PKPaymentDataProviderDelegate, PKDynamicSectionController, PKViewControllerPreflightable> {
    PKRewardsSummaryFetcher *_rewardsFetcher;
    id<PKPaymentDataProvider> _paymentDataProvider;
    BOOL _showRewardsGraph;
    PKAccountRewardsTierSummary *_lifetimeSummary;
    id<PKRewardsHubSectionControllerDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _summaryFetchLock;
    BOOL _summaryFetchInProgress;
    BOOL _transactionsNeedUpdate;
    NSMutableSet *_pendingCompletionHandlers;
    NSMutableDictionary *_sectionIDToPresenterMap;
    NSMutableDictionary *_sectionIDToItemsMap;
}

@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;

- (void)dealloc;
- (id)_collectionView;
- (void)_reloadData;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void).cxx_destruct;
- (id)_sectionIdentifierForItem:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_configureFooterView:(id)a0 inSection:(id)a1;
- (void)_configureHeaderView:(id)a0 inSection:(id)a1;
- (id)_cellPresenterIdentifierForItem:(id)a0;
- (id)_createPresenterForSection:(id)a0;
- (BOOL)_hasFooterForSection:(id)a0;
- (BOOL)_hasHeaderForSection:(id)a0;
- (id)_itemsForSection:(id)a0;
- (id)_presenterForSection:(id)a0;
- (void)_reloadDataAndUpdateDelegate;
- (void)_reloadDataWithCompletion:(id /* block */)a0;
- (void)_setCornerMaskForCell:(id)a0 indexPath:(id)a1 section:(id)a2;
- (void)_setItems:(id)a0 forSection:(id)a1;
- (id)cellRegistrationForItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)initWithSectionIdentifiers:(id)a0 rewardsFetcher:(id)a1 paymentDataProvider:(id)a2 showRewardsGraph:(BOOL)a3 delegate:(id)a4;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;

@end
