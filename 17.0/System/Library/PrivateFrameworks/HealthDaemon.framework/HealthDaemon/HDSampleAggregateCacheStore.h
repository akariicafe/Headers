@class NSDateComponents, NSArray, HDProfile, HDQueryDescriptor, NSString, HDSourceEntity, NSDate;

@interface HDSampleAggregateCacheStore : NSObject {
    HDProfile *_profile;
    NSString *_cachingIdentifier;
    HDSourceEntity *_sourceEntity;
    NSDate *_anchorDate;
    NSDate *_persistentAnchorDate;
    NSDateComponents *_intervalComponents;
}

@property (readonly, copy, nonatomic) HDQueryDescriptor *queryDescriptor;
@property (copy, nonatomic) NSArray *invalidationQueryDescriptors;
@property (copy, nonatomic) id /* block */ timeIntervalToBucketIndex;

- (void).cxx_destruct;
- (long long)cachesExistWithError:(id *)a0;
- (BOOL)deleteCachesForIndexes:(id)a0 generationNumber:(long long)a1 error:(id *)a2;
- (BOOL)enumerateForInterval:(id)a0 cachedClass:(Class)a1 anchorAfterDatabaseScan:(long long *)a2 error:(id *)a3 cacheHandler:(id /* block */)a4;
- (BOOL)enumerateForInterval:(id)a0 cachedClass:(Class)a1 anchorAfterDatabaseScan:(long long *)a2 nowDate:(id)a3 calendar:(id)a4 error:(id *)a5 cacheHandler:(id /* block */)a6;
- (id)initWithProfile:(id)a0 queryDescriptor:(id)a1 cachingIdentifier:(id)a2 sourceEntity:(id)a3 anchorDate:(id)a4 intervalComponents:(id)a5 timeIntervalToBucketIndex:(id /* block */)a6;
- (id)persistentAnchorDateWithError:(id *)a0;
- (BOOL)saveCaches:(id)a0 generationNumber:(long long)a1 error:(id *)a2;

@end
