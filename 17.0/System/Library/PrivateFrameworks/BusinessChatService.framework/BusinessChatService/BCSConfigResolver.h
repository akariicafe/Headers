@class NSString, NSObject;
@protocol BCSConfigCaching, BCSFetchTrigger, BCSConfigCacheSkipping, BCSMetricFactoryProtocol, OS_dispatch_queue;

@interface BCSConfigResolver : NSObject <BCSConfigResolving> {
    id<BCSConfigCaching> _configCache;
    id<BCSConfigCacheSkipping> _configCacheSkipper;
    id<BCSFetchTrigger> _megashardFetchTrigger;
    id<BCSMetricFactoryProtocol> _metricFactory;
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configItemWithType:(long long)a0 clientBundleID:(id)a1 metric:(id)a2 completion:(id /* block */)a3;

@end
