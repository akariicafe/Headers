@class TSUUUIDSetStore, NSMutableDictionary;

@interface TSUUUIDSubsetCreator : NSObject {
    NSMutableDictionary *_createdSubsetsByRange;
}

@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__begin_; void *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__value_; } __end_cap_; } baseUuidVector;
@property (readonly) TSUUUIDSetStore *uuidSetStore;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithUuidSetStore:(id)a0 baseUuidVector:(const void *)a1;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
