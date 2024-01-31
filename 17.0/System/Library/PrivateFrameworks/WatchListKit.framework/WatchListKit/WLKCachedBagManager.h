@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WLKCachedBagManager : NSObject {
    NSMutableDictionary *_memoryCache;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_extractMissingKeys:(id)a0 dictionary:(id)a1;
- (BOOL)_isParameterConfigurationValid:(id)a0 amsBag:(id)a1 completion:(id /* block */)a2;
- (void)_queryAMSBag:(id)a0 amsBag:(id)a1 resultHandler:(id /* block */)a2;
- (void)_queryAMSCachedBag:(id)a0 amsBag:(id)a1 observationToken:(unsigned long long *)a2 waitForUpdateOnCacheMiss:(BOOL)a3 resultHandler:(id /* block */)a4;
- (id)_queryMemoryCache:(id)a0;
- (void)fetchValuesWithCompletion:(id)a0 waitForUpdateOnCacheMiss:(BOOL)a1 amsBag:(id)a2 completion:(id /* block */)a3;

@end
