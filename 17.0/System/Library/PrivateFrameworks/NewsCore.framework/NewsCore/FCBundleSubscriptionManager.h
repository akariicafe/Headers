@class NFMutexLock, NSString, FCBundleSubscription, NSHashTable, FCAsyncSerialQueue, FCKeyValueStore, FCBundleSubscriptionLookUpEntryManager;
@protocol FCContentContext, FCBundleEntitlementsProviderType, FCEntitlementsOverrideProviderType, FCBundleChannelProviderType, FCCoreConfigurationManager;

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType> {
    BOOL _hasRunEntitlementOnce;
    id<FCBundleEntitlementsProviderType> _bundleEntitlementsProvider;
    id<FCContentContext> _contentContext;
    FCKeyValueStore *_localStore;
    FCBundleSubscriptionLookUpEntryManager *_bundleSubscriptionLookupEntryManager;
    NSHashTable *_observers;
    NFMutexLock *_accessLock;
    id<FCBundleChannelProviderType> _bundleChannelProvider;
    id<FCCoreConfigurationManager> _configurationManager;
    FCAsyncSerialQueue *_refreshQueue;
}

@property (retain, nonatomic) FCBundleSubscription *cachedSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FCBundleSubscription *validatedCachedSubscription;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
@property (readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void)setEntitlementsOverrideProvider:(id)a0;
- (void)silentExpireBundleSubscription;
- (id)bundleSubscriptionLookupEntry;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 hideBundleDetectionUI:(BOOL)a1 completion:(id /* block */)a2;
- (void)clearBundleSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)activityObservingApplicationDidEnterBackground;
- (void).cxx_destruct;
- (id)initWithPrivateDataDirectory:(id)a0 configurationManager:(id)a1 contentContext:(id)a2 appActivityMonitor:(id)a3 entitlementsProvider:(id)a4;
- (void)bundleChannelProvider:(id)a0 bundleChannelIDsDidChangeWithChannelIDs:(id)a1 version:(id)a2;
- (void)addObserver:(id)a0;
- (void)prepareForUseWithCompletion:(id /* block */)a0;

@end
