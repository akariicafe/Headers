@class NSString, NSMutableDictionary, NSTimer, NSNumber, ICQUnfairLock;

@interface ICQOfferManager : NSObject {
    NSTimer *_regularOfferInvalidationTimer;
    NSTimer *_premiumOfferInvalidationTimer;
}

@property (class, readonly, nonatomic) NSString *ckBackupDeviceID;

@property (readonly, nonatomic) BOOL isDeviceStorageAlmostFull;
@property (nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (retain, nonatomic) NSNumber *simulatedPhotosLibrarySize;
@property (readonly, nonatomic) NSNumber *photosLibrarySize;
@property (nonatomic, getter=isBuddyOfferEnabled) BOOL buddyOfferEnabled;
@property (retain, nonatomic) NSMutableDictionary *cachedOffers;
@property (retain, nonatomic) NSMutableDictionary *registeredDarwinNotifications;
@property (retain, nonatomic) ICQUnfairLock *cachedOffersLock;

+ (id)defaultBundleIdentifier;
+ (BOOL)_legacyBuddyOfferMightNeedPresenting;
+ (id)stringWithPlaceholderFormat:(id)a0 alternateString:(id)a1;
+ (BOOL)buddyOfferMightNeedPresenting;
+ (id)defaultPlaceholderKeys;
+ (id)sharedOfferManager;

- (void)_getOfferForBundleIdentifier:(id)a0 options:(id)a1 offerContext:(id)a2 completion:(id /* block */)a3;
- (id)cachedOfferForType:(long long)a0;
- (void)teardownCachedPremiumOffer;
- (id)init;
- (void)forcePostFollowup;
- (void)dealloc;
- (void)postOfferType:(id)a0;
- (void)_unregisterForDarwinNotification:(id)a0;
- (id)currentPremiumOffer;
- (void)teardownCachedOffer;
- (void)_firedPremiumOfferInvalidationTimer:(id)a0;
- (void)getPremiumOfferAndOpportunityBubbleForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_setupTimerForInvalidationDate:(id)a0 forType:(long long)a1;
- (void)_teardownPremiumOfferInvalidationTimer;
- (void)_handlePushReceivedDarwinNotificationRequestType:(long long)a0;
- (void)getOfferWithCompletion:(id /* block */)a0;
- (id)_refreshOfferWithDaemonOfferDict:(id)a0 offerRequestType:(long long)a1 bundleId:(id)a2;
- (id)currentDefaultOffer;
- (void)clearFollowups;
- (BOOL)_offerTypeMatchesRequestOptions:(id)a0 offer:(id)a1;
- (void)_registerForDarwinNotification:(id)a0;
- (BOOL)fetchOfferIfNeeded;
- (void)postBackupRestoredOffer:(id /* block */)a0;
- (void)getPremiumOfferForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getDefaultOfferWithCompletion:(id /* block */)a0;
- (void)getPremiumOfferForBundleIdentifier:(id)a0 offerContext:(id)a1 completion:(id /* block */)a2;
- (void)_teardownRegularOfferInvalidationTimer;
- (void)getOfferForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_setupTimerForPremiumOfferInvalidationDate:(id)a0;
- (void)_setupTimerForRegularOfferInvalidationDate:(id)a0;
- (void)getPremiumOfferWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)currentOffer;
- (void)_refetchDefaultOffer;
- (void)postBuddyOfferType:(id)a0;
- (void)_refetchPremiumOffer;
- (void)_funnelCloudServerOfferForAccount:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)teardownCachedBuddyOffer;
- (void)_refetchRegularOffer;
- (void)_getOfferForAccount:(id)a0 bundleIdentifier:(id)a1 options:(id)a2 offerContext:(id)a3 completion:(id /* block */)a4;
- (void)teardownCachedOffers;
- (void)updateOfferId:(id)a0 buttonId:(id)a1 info:(id)a2 completion:(id /* block */)a3;
- (void)_teardownInvalidationTimerForRequestType:(long long)a0;
- (void)_firedRegularOfferInvalidationTimer:(id)a0;
- (id)currentOfferForBundleIdentifier:(id)a0;
- (id)currentPremiumOfferForBundleIdentifier:(id)a0;
- (id)_currentOfferForBundleIdentifier:(id)a0 options:(id)a1;
- (id)_premiumOptions;
- (void)getPremiumOfferAndOpportunityBubbleWithCompletion:(id /* block */)a0;
- (BOOL)_shouldUseOffer:(id)a0 forBundleIdentifier:(id)a1;
- (void)getOfferForBundleIdentifier:(id)a0 offerContext:(id)a1 completion:(id /* block */)a2;
- (void)_unregisterForAllDarwinNotifications;
- (void)setCachedOfferForType:(long long)a0 newOffer:(id)a1;

@end
