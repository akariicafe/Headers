@class HDAssertion, NSString, NSArray, NSDate, HDSampleAggregateCacheStore, NSError, NSDateInterval, HDProfile, NSDateComponents, HDSourceEntity;

@interface HDSampleAggregateCachingSession : NSObject {
    HDSampleAggregateCacheStore *_cacheStore;
    HDProfile *_profile;
    Class _cachedClass;
    NSDateInterval *_queryInterval;
    NSString *_cachingIdentifier;
    HDSourceEntity *_sourceEntity;
    long long _generationNumber;
    NSDate *_anchorDate;
    NSDate *_persistentAnchorDate;
    NSDateComponents *_intervalComponents;
    long long _maxAnchor;
    NSError *_fatalError;
    long long _state;
    struct unordered_set<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> { struct __hash_table<long, std::hash<long>, std::equal_to<long>, std::allocator<long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<long, void *> *>, std::allocator<std::__hash_node<long, void *>>> { struct __hash_node_base<std::__hash_node<long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<long>> { float __value_; } __p3_; } __table_; } _staleIndexes;
    BOOL _anchorSetOnInsert;
    NSError *_sampleAggregateCachingSessionQueue_insertError;
}

@property (copy, nonatomic) NSArray *invalidationQueryDescriptors;
@property (retain, nonatomic) HDAssertion *accessibilityAssertion;

- (void)finishWithCompletion:(id /* block */)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)activateWithError:(id *)a0 cacheHandler:(id /* block */)a1;
- (void)insertCaches:(id)a0 anchor:(id)a1 completion:(id /* block */)a2;
- (long long)cachesExistWithError:(id *)a0;
- (void)deleteCachesForIntervals:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 cachingIdentifier:(id)a1 sourceEntity:(id)a2 queryDescriptor:(id)a3 cachedClass:(Class)a4 queryInterval:(id)a5 anchorDate:(id)a6 intervalComponents:(id)a7 timeIntervalToBucketIndex:(id /* block */)a8;
- (id)persistentAnchorDateWithError:(id *)a0;

@end
