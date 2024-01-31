@class NSString, NSObject;
@protocol BCSFetchTrigger, BCSIconControllerProtocol, BCSChatSuggestControllerProtocol, BCSConfigCaching, BCSHousekeeping, BCSItemResolving, OS_dispatch_queue, BCSConfigResolving, BCSCacheClearing, BCSShardResolving, BCSConfigCacheSkipping, BCSURLPatternControllerProtocol, BCSShardCacheQueryable, BCSMetricFactoryProtocol, BCSShardCacheSkipping, BCSEntitlementVerifying, BCSIdentityServiceProtocol, BCSQueryChopperProtocol;

@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol> {
    id<BCSIdentityServiceProtocol> _identityService;
    id<BCSIconControllerProtocol> _iconController;
    id<BCSCacheClearing> _cacheClearer;
    id<BCSChatSuggestControllerProtocol> _chatSuggestController;
    id<BCSItemResolving> _chatSuggestItemResolver;
    id<BCSConfigResolving> _chatSuggestConfigResolver;
    id<BCSShardResolving> _chatSuggestShardResolver;
    id<BCSItemResolving> _linkItemResolver;
    id<BCSConfigResolving> _linkConfigResolver;
    id<BCSShardResolving> _linkShardResolver;
    id<BCSItemResolving> _businessCallerItemResolver;
    id<BCSConfigResolving> _businessCallerConfigResolver;
    id<BCSShardResolving> _businessCallerShardResolver;
    id<BCSFetchTrigger> _chatSuggestMegashardFetchTrigger;
    id<BCSFetchTrigger> _businessLinkMegashardFetchTrigger;
    id<BCSFetchTrigger> _businessCallerMegashardFetchTrigger;
    id<BCSEntitlementVerifying> _entitlementVerifier;
    id<BCSQueryChopperProtocol> _queryChopper;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id<BCSMetricFactoryProtocol> _metricFactory;
    id<BCSShardCacheQueryable> _shardCache;
    id<BCSConfigCaching> _configCache;
    id<BCSConfigCacheSkipping> _configCacheSkip;
    id<BCSShardCacheSkipping> _shardCacheSkip;
    id<BCSURLPatternControllerProtocol> _patternController;
    id<BCSHousekeeping> _housekeeper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fetchLinkItemModelWithURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)_deleteInMemoryCache;
- (void)_isBusinessRegisteredWithItemIdentifier:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)_itemWithIdentifier:(id)a0 forClientBundleID:(id)a1 skipFilterCheck:(BOOL)a2 completion:(id /* block */)a3;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)clearCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)clearExpiredCachesForType:(long long)a0 completion:(id /* block */)a1;
- (void)fetchBusinessCallerMetadataForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchBusinessItemWithPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchIsBusinessPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchLinkItemModelWithHash:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchSquareIconDataForBusinessItem:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (id)initWithChatSuggestMegashardFetchTrigger:(id)a0 businessLinkMegashardFetchTrigger:(id)a1 businessCallerMegashardFetchTrigger:(id)a2 entitlementVerifier:(id)a3 identityService:(id)a4 chatSuggestController:(id)a5 iconController:(id)a6 cacheClearer:(id)a7 shardCache:(id)a8 configCache:(id)a9 configCacheSkip:(id)a10 shardCacheSkip:(id)a11 chatSuggestConfigResolver:(id)a12 linkConfigResolver:(id)a13 businessCallerConfigResolver:(id)a14 chatSuggestShardResolver:(id)a15 linkShardResolver:(id)a16 businessCallerShardResolver:(id)a17 chatSuggestItemResolver:(id)a18 linkItemResolver:(id)a19 businessCallerItemResolver:(id)a20 queryChopper:(id)a21 patternController:(id)a22 metricFactory:(id)a23 housekeeper:(id)a24;
- (id)initWithChatSuggestMegashardFetcher:(id)a0 businessLinkMegashardFetcher:(id)a1 businessCallerMegashardFetcher:(id)a2 shardCache:(id)a3 cacheManager:(id)a4 chatSuggestRemoteFetcher:(id)a5 businessLinkRemoteFetcher:(id)a6 businessCallerRemoteFetcher:(id)a7 userDefaults:(id)a8 metricFactory:(id)a9;
- (void)isBusinessCallerRegisteredForPhoneNumber:(id)a0 forClientBundleID:(id)a1 completion:(id /* block */)a2;
- (void)isBusinessRegisteredForURL:(id)a0 chopURL:(BOOL)a1 forClientBundleID:(id)a2 completion:(id /* block */)a3;
- (void)prefetchMegashardsWithCompletion:(id /* block */)a0;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)a0 forClientBundleID:(id)a1;

@end
