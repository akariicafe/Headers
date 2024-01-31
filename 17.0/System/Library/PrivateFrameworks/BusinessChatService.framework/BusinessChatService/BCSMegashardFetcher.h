@class NSMutableSet;
@protocol BCSMetricFactoryProtocol, BCSShardCacheSkipping, BCSShardCacheQueryable, BCSConfigCaching, BCSMegashardRemoteFetching, BCSShardItemInstantiating, BCSUserDefaultsProviding;

@interface BCSMegashardFetcher : NSObject {
    long long _type;
    long long _shardType;
    id<BCSConfigCaching> _configCache;
    id<BCSShardCacheQueryable> _shardCache;
    id<BCSShardCacheSkipping> _shardCacheSkipper;
    id<BCSMegashardRemoteFetching> _megashardRemoteFetcher;
    id<BCSShardItemInstantiating> _shardInstantiator;
    id<BCSUserDefaultsProviding> _userDefaults;
    id<BCSMetricFactoryProtocol> _metricFactory;
    NSMutableSet *_triggers;
}

- (void).cxx_destruct;
- (id)initWithShardType:(long long)a0 configCache:(id)a1 shardCache:(id)a2 shardCacheSkipper:(id)a3 shardInstantiator:(id)a4 megashardRemoteFetcher:(id)a5 userDefaults:(id)a6 metricFactory:(id)a7;
- (void)addFetchTrigger:(id)a0;

@end
