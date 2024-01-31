@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying> {
    struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { struct __hash_table<TSU::UUIDData<TSP::UUIDData>, std::hash<TSUUUID>, std::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::allocator<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *>>> { struct __hash_node_base<std::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TSUUUID>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TSU::UUIDData<TSP::UUIDData>>> { float __value_; } __p3_; } __table_; } _uuidSet;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned int index;

- (id)initWithUUID:(const void *)a0;
- (void)setIndex:(unsigned int)a0;
- (unsigned long long)hash;
- (BOOL)intersectsSet:(id)a0;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUIDSet:(id)a0;
- (BOOL)containsUuid:(const void *)a0;
- (void)foreachUuid:(id /* block */)a0;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })anyUuid;
- (id)reducedSetMinusUuidsFromVector:(const void *)a0;
- (id)expandedSetWithUuidsFromVector:(const void *)a0;
- (id)expandedSetWithUuid:(const void *)a0;
- (id)expandedSetWithUuids:(const void *)a0;
- (id)initWithUUIDVector:(const void *)a0;
- (BOOL)isAllInvalid;
- (BOOL)p_addUUID:(const void *)a0;
- (void)p_addUUIDs:(const void *)a0;
- (void)p_addUUIDsFromVector:(const void *)a0;
- (BOOL)p_removeUUID:(const void *)a0;
- (void)p_removeUUIDs:(const void *)a0;
- (void)p_removeUUIDsFromVector:(const void *)a0;
- (id)reducedSetMinusUuid:(const void *)a0;
- (id)reducedSetMinusUuids:(const void *)a0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *x0; void *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *x0; } x2; })uuidsAsVector;

@end
