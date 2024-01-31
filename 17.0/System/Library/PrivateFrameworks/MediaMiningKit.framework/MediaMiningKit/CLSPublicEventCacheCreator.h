@class CLSPublicEventCache;

@interface CLSPublicEventCacheCreator : NSObject

@property (readonly, nonatomic) CLSPublicEventCache *cache;
@property (readonly, nonatomic) double queryRadius;
@property (nonatomic) BOOL simulatesTimeout;
@property (readonly, nonatomic) unsigned long long maximumBatchSize;

- (void).cxx_destruct;
- (id)_queryEventsForTimeLocationTuples:(id)a0 invalidationTokens:(out id *)a1 progressBlock:(id /* block */)a2 error:(id *)a3;
- (id)createCacheForTimeLocationTuples:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithCache:(id)a0 queryRadius:(double)a1;

@end
