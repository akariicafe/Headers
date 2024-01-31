@class PKAccountEnhancedMerchantsFetcher, NSArray, NSString, NSUUID, UICollectionViewCellRegistration;
@protocol PKRewardsHubSectionControllerDelegate;

@interface PKEnhancedMerchantsShelfSectionController : NSObject <PKDynamicSectionController, PKViewControllerPreflightable> {
    PKAccountEnhancedMerchantsFetcher *_fetcher;
    id<PKRewardsHubSectionControllerDelegate> _delegate;
    NSUUID *_merchantsUpdateToken;
}

@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_configureDataSource;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (void)didPressEnhancedMerchantsListButton;
- (id)initWithSectionIdentifier:(id)a0 fetcher:(id)a1 delegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
