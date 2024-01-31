@class NFLazy, NSString, NSDate, FCKeyValueStore, NSSet, NSMutableDictionary, NSDictionary, FCAsyncSerialQueue, NSObject, FCPurchaseLookUpEntriesManager, FCEntitlementService, FCCloudContext;
@protocol OS_dispatch_queue, FCEntitlementsOverrideProviderType;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, FCAppActivityObserving, FCPurchaseProviderType> {
    NSSet *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_webAccessEntriesByTagID;
    FCCloudContext *_cloudContext;
    NFLazy *_session;
    FCKeyValueStore *_localStore;
    FCPurchaseLookUpEntriesManager *_purchaseLookupEntriesManager;
    NSDictionary *_readOnlyPurchaseLookUpEntriesByTagID;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_accessQueue;
    FCAsyncSerialQueue *_entitlementQueue;
    FCEntitlementService *_entitlementService;
}

@property (readonly, nonatomic) NSString *lastSignedInItunesAccountName;
@property (readonly, nonatomic) NSSet *purchasesDiscoveredTagIDs;
@property (readonly, nonatomic) NSDictionary *purchaseLookUpEntriesByTagID;
@property (readonly, nonatomic) NSMutableDictionary *webAccessEntriesByTagID;
@property (readonly, nonatomic) NSSet *allPurchasedTagIDs;
@property (readonly, nonatomic) NSSet *allPurchaseIDs;
@property (readonly, nonatomic) NSSet *allTagIDs;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;

- (BOOL)isPaidSubscriberFromNews;
- (id)initWithCloudContext:(id)a0 entitlementService:(id)a1;
- (id)init;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)a0;
- (void)dealloc;
- (void)submitWebAccessWithTagID:(id)a0 purchaseID:(id)a1 emailAddress:(id)a2 purchaseReceipt:(id)a3 serialCompletion:(id /* block */)a4 completion:(id /* block */)a5;
- (id)purchaseLookUpEntryForTagID:(id)a0;
- (void)userInfo:(id)a0 didChangeAccessTokenForTagID:(id)a1;
- (void)removeFromPurchasesDiscoveredList:(id)a0 completion:(id /* block */)a1;
- (void)userInfo:(id)a0 didRemoveAccessTokenForTagID:(id)a1 userInitiated:(BOOL)a2;
- (void)renewalNoticeShownForPurchasedChannelsListWithTagIDs:(id)a0;
- (void)fetchChannelIDsForPurchaseIDs:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)clearAllAppStorePurchases;
- (id)webAccessOptedInTagIDs;
- (BOOL)isPaidSubscriber;
- (BOOL)isPaidSubscriberFromWeb;
- (BOOL)hasRenewalNoticeShownForTagID:(id)a0;
- (BOOL)isPaidSubscriberFromAppStore;
- (void)activityObservingApplicationDidEnterBackground;
- (void)performEntitlementCheckWithIgnoreCache:(BOOL)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)addToWebAccessOptedInListWithTagID:(id)a0;
- (void).cxx_destruct;
- (id)expiredPurchaseChannelIDs;
- (void)shouldShowiTunesSignedOutAlertWithiTunesAccountName:(id)a0 iTunesAccountDSID:(id)a1 isUserSignedIntoiTunes:(BOOL)a2 isBundleSubscriber:(BOOL)a3 completion:(id /* block */)a4;
- (void)removeWebPurchaseForTagID:(id)a0 userInitiated:(BOOL)a1;
- (void)verifyAccessTokenWithTagID:(id)a0 accessToken:(id)a1 consumedArticleCount:(unsigned long long)a2 serialCompletion:(id /* block */)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;
- (void)updatePurchaseEntryToExpired:(id)a0;
- (void)addAppStorePurchaseWithTagID:(id)a0 purchaseID:(id)a1;
- (void)forceExpireAllSubscriptionsIfNeeded;
- (void)silentExpireInAppSubscriptions;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithiTunesAccountName:(id)a0 iTunesAccountDSID:(id)a1 isUserSignedIntoiTunes:(BOOL)a2 isBundleSubscriber:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)isTagPurchased:(id)a0;
- (BOOL)isTagIDPurchased:(id)a0;
- (BOOL)hasPurchaseTypeAppStore;
- (void)updatePurchaseEntryToExpiredForTagIDs:(id)a0;
- (id)subscriptionNotSupportedChannelIDs;

@end
