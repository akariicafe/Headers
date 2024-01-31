@class ICQPremiumOffer;

@interface PXCloudQuotaPremiumOfferProvider : PXObservable

@property (class, readonly) PXCloudQuotaPremiumOfferProvider *currentPremiumOfferProvider;

@property (readonly, nonatomic) ICQPremiumOffer *premiumOffer;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)setPremiumOffer:(id)a0;
- (void)_currentPremiumOfferChangedNotification:(id)a0;
- (void).cxx_destruct;
- (void)_updateCurrentPremiumOffer:(id)a0;
- (void)_queue_getCurrentPremiumOffer;
- (void)_queue_initialSetup;

@end
