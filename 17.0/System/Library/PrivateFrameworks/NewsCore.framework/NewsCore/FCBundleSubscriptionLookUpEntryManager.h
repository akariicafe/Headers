@class FCBundleSubscriptionLookUpEntry, NFUnfairLock, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject

@property (retain, nonatomic) FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (readonly, nonatomic) NFUnfairLock *lock;
@property (readonly, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;

- (void)loadLocalCachesFromStore;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)a0;
- (void).cxx_destruct;
- (void)setBundleSubscriptionLookUpEntry:(id)a0;
- (id)initWithLocalStore:(id)a0;
- (void)cleanupStaleExpiredEntry;
- (void)updateEntry:(id)a0;
- (void)addBundleChannelIDs:(id)a0 bundleChannelIDsVersion:(id)a1 purchaseID:(id)a2 inTrialPeriod:(BOOL)a3 isPurchaser:(BOOL)a4 servicesBundlePurchaseID:(id)a5 isAmplifyUser:(BOOL)a6 initialPurchaseTimestamp:(id)a7 isPaidBundleViaOfferActivated:(BOOL)a8;

@end
