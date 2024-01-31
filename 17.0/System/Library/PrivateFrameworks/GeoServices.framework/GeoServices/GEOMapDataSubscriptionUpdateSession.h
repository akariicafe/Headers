@class NSDictionary;

@interface GEOMapDataSubscriptionUpdateSession : GEOMapDataSubscriptionDownloadGroup

@property (readonly, nonatomic) long long updateType;
@property (copy, nonatomic) NSDictionary *offlineDataVersions;

- (void).cxx_destruct;
- (id)initWithSubscriptions:(id)a0 downloadMode:(unsigned long long)a1 updateType:(long long)a2 xpcActivity:(id)a3 delegate:(id)a4 delegateQueue:(id)a5;

@end
