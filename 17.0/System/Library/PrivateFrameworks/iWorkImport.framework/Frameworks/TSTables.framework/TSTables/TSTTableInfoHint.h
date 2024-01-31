@class NSMutableIndexSet, TSTCellUIDList;

@interface TSTTableInfoHint : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (readonly, nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } cellFlags;
@property (readonly, nonatomic) TSTCellUIDList *cellUIDs;
@property (readonly, nonatomic) NSMutableIndexSet *tableStyleIndexes;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateTableStylesUsingBlock:(id /* block */)a0;
- (void)addCellUID:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0 flags:(unsigned long long)a1 addingMaximumSize:(struct CGSize { double x0; double x1; })a2;
- (void)addTableStyleIndex:(unsigned long long)a0;
- (BOOL)containsStyleNetworkIndex:(unsigned long long)a0;
- (void)enumerateCellUIDsUsingBlock:(id /* block */)a0;
- (BOOL)hasStylesInCells;
- (BOOL)hasTableStyles;

@end
