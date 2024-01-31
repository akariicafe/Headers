@class TBDataSourceMediator, NSMutableDictionary, NSString, NSURL, NSObject, WiFi3BarsTileFetcher;
@protocol OS_dispatch_queue;

@interface WiFi3BarsSource : NSObject <WiFiAvailabilitySource>

@property (retain, nonatomic) NSMutableDictionary *networks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) TBDataSourceMediator *sourceMediator;
@property (retain, nonatomic) WiFi3BarsTileFetcher *tileFetcher;
@property (nonatomic) unsigned long long cacheExpirationInDays;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (copy, nonatomic) id /* block */ relevancyHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceFetch3BarsNetworkMatchingBSSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetch3BarsNetworksPredictedForLocation:(id)a0 duration:(double)a1 maxLocations:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithChangeHandler:(id /* block */)a0 localStoreType:(unsigned long long)a1;
- (void)submitCacheAnalyticsEvent;
- (void)fetchCandidateNetworksMatchingBSSIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleRemoteFetchResponse:(id)a0;
- (void)fetch3BarsNetworksForLocation:(id)a0 forceRemote:(BOOL)a1 trigger:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)_matchSearchBSSIDs:(id)a0 toResponse:(id)a1;
- (void).cxx_destruct;
- (void)fetch3BarsNetworksFor:(id)a0;
- (id)relevantNetworks;
- (void)prune3BarsNetworks:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)_descriptorForType:(unsigned long long)a0;

@end
