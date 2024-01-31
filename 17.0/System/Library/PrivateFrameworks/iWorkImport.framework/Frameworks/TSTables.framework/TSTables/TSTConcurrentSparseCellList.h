@class NSMutableIndexSet;

@interface TSTConcurrentSparseCellList : TSTConcurrentCellList

@property (retain, nonatomic) NSMutableIndexSet *validCells;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)cellCount;
- (void)addCell:(id)a0 atUidOffset:(struct TSUColumnRowOffset { int x0; int x1; })a1;
- (void)addCell:(id)a0 atViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1;
- (void)appendCellUIDRange:(struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })a0;
- (BOOL)hasCells;
- (id)initWithContext:(id)a0 viewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1 cellUIDRange:(struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })a2;
- (void)p_accumulateBordersConcurrentlyUsingBlock:(id /* block */)a0 accumulateCellsConcurrentlyUsingBlock:(id /* block */)a1;
- (void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (id)p_interestingCellIndexes;
- (void)p_invokeBlock:(id /* block */)a0;
- (void)p_pruneCellsAtColumn:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;
- (void)p_pruneCellsAtRow:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;

@end
