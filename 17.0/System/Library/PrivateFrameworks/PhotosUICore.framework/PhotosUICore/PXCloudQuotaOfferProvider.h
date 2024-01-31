@class ICQOffer;

@interface PXCloudQuotaOfferProvider : PXObservable

@property (class, readonly) PXCloudQuotaOfferProvider *currentOfferProvider;

@property (readonly, nonatomic) ICQOffer *offer;
@property (readonly, nonatomic) BOOL offerHasAssetCounts;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)setOfferHasAssetCounts:(BOOL)a0;
- (void)_queue_getCurrentOffer;
- (void).cxx_destruct;
- (void)_currentOfferChangedNotification:(id)a0;
- (void)setOffer:(id)a0;
- (void)_queue_initialSetup;
- (void)_updateCurrentOffer:(id)a0;

@end
