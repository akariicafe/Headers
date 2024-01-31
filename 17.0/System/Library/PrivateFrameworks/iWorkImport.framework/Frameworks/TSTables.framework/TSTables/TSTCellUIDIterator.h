@class TSTCellUIDList;

@interface TSTCellUIDIterator : NSObject {
    struct deque<TSKUIDStruct, std::allocator<TSKUIDStruct>> { struct __split_buffer<TSKUIDStruct *, std::allocator<TSKUIDStruct *>> { struct TSKUIDStruct **__first_; struct TSKUIDStruct **__begin_; struct TSKUIDStruct **__end_; struct __compressed_pair<TSKUIDStruct **, std::allocator<TSKUIDStruct *>> { struct TSKUIDStruct **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<TSKUIDStruct>> { unsigned long long __value_; } __size_; } _recentRowResults;
    struct deque<TSKUIDStruct, std::allocator<TSKUIDStruct>> { struct __split_buffer<TSKUIDStruct *, std::allocator<TSKUIDStruct *>> { struct TSKUIDStruct **__first_; struct TSKUIDStruct **__begin_; struct TSKUIDStruct **__end_; struct __compressed_pair<TSKUIDStruct **, std::allocator<TSKUIDStruct *>> { struct TSKUIDStruct **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<TSKUIDStruct>> { unsigned long long __value_; } __size_; } _recentColumnResults;
}

@property (retain, nonatomic) TSTCellUIDList *cellUIDList;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long rowIndex;
@property (nonatomic) unsigned long long columnIndex;
@property (nonatomic) unsigned long long rowRemainDup;
@property (nonatomic) unsigned long long columnRemainDup;
@property (nonatomic) unsigned long long lastRowDiffPos;
@property (nonatomic) unsigned long long lastColumnDiffPos;
@property (nonatomic) struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _column; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _row; } cellUID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })_nextCellUID_NoDispatch;
- (id)initWithCellUIDList:(id)a0;
- (struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })nextCellUID;
- (BOOL)nextCellUIDsBatch:(void *)a0 batchSize:(unsigned long long)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })p_nextCellRefIdWithUIDIndexList:(const void *)a0 UIDs:(const void *)a1 index:(unsigned long long *)a2 remainDup:(unsigned long long *)a3 lastDiffPos:(unsigned long long *)a4 recentResults:(void *)a5;

@end
