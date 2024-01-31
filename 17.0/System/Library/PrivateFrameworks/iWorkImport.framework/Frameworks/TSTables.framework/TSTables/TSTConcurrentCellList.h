@class NSArray, NSMutableDictionary, __end_cap_, TSUPointerKeyDictionary, NSMutableArray, __end_;

@interface TSTConcurrentCellList : TSPObject <NSCopying> {
    struct vector<TSTCell *, std::allocator<TSTCell *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>> { id *__value_; } x1; } _cells;
    struct vector<TSUModelRowIndex, std::allocator<TSUModelRowIndex>> { struct TSUModelRowIndex *__begin_; struct TSUModelRowIndex *__end_; struct __compressed_pair<TSUModelRowIndex *, std::allocator<TSUModelRowIndex>> { struct TSUModelRowIndex *__value_; } __end_cap_; } _baseRows;
    struct vector<TSUModelColumnIndex, std::allocator<TSUModelColumnIndex>> { struct TSUModelColumnIndex *__begin_; struct TSUModelColumnIndex *__end_; struct __compressed_pair<TSUModelColumnIndex *, std::allocator<TSUModelColumnIndex>> { struct TSUModelColumnIndex *__value_; } __end_cap_; } _baseColumns;
    struct vector<TSUViewRowIndex, std::allocator<TSUViewRowIndex>> { struct TSUViewRowIndex *__begin_; struct TSUViewRowIndex *__end_; struct __compressed_pair<TSUViewRowIndex *, std::allocator<TSUViewRowIndex>> { struct TSUViewRowIndex *__value_; } __end_cap_; } _viewRows;
    struct vector<TSUViewColumnIndex, std::allocator<TSUViewColumnIndex>> { struct TSUViewColumnIndex *__begin_; struct TSUViewColumnIndex *__end_; struct __compressed_pair<TSUViewColumnIndex *, std::allocator<TSUViewColumnIndex>> { struct TSUViewColumnIndex *__value_; } __end_cap_; } _viewColumns;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _cellCountDiffsPerRow;
    struct vector<long, std::allocator<long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::allocator<long>> { long long *__value_; } __end_cap_; } _cellCountDiffsPerColumn;
    struct vector<TSTCell *, std::allocator<TSTCell *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSTCell *__strong *, std::allocator<TSTCell *>> { id *__value_; } x1; } _oldCells;
}

@property (readonly, nonatomic, getter=isUIDBased) BOOL uidBased;
@property (nonatomic) struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } origin; struct { unsigned int numberOfColumns; unsigned int numberOfRows; } size; } _rect; } viewCellRect;
@property (nonatomic) struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _colIdList; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } _rowIdList; } cellUIDRange;
@property (readonly, nonatomic) BOOL hasCells;
@property (readonly, nonatomic) unsigned long long cellCount;
@property (retain, nonatomic) NSArray *interestingCells;
@property (retain, nonatomic) TSUPointerKeyDictionary *formatsAdded;
@property (retain, nonatomic) NSMutableDictionary *formatsRemoved;
@property (retain, nonatomic) NSMutableArray *tilesPerRow;
@property (retain, nonatomic) NSMutableArray *rowInfosPerRow;

+ (id)cellListWithContext:(id)a0 cellUIDRange:(struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })a1 repeatCellVectorPattern:(const void *)a2 patternDirection:(long long)a3;

- (id).cxx_construct;
- (unsigned int)rowCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (const void *)p_cells;
- (void)addCell:(id)a0 atIndex:(unsigned long long)a1;
- (void)addCell:(id)a0 atViewCellCoord:(struct TSUViewCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a1;
- (id)initWithContext:(id)a0 cellUIDRange:(struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })a1;
- (id)initWithContext:(id)a0 viewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1;
- (id)initWithContext:(id)a0 viewCellRect:(struct TSUViewCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1 cellUIDRange:(struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })a2;
- (void)p_accumulateBordersConcurrentlyUsingBlock:(id /* block */)a0 accumulateCellsConcurrentlyUsingBlock:(id /* block */)a1;
- (id)p_baseColumnIndexes;
- (id)p_baseRowIndexes;
- (void)p_clearDataListIDs;
- (void)p_convertToInverseCellMap;
- (void)p_convertToUuidBasedCellListUsingTableInfo:(id)a0 pruneCategorizedCells:(BOOL)a1;
- (void)p_enumerateCellsAddedAndRemovedForFormatsUsingBlock:(id /* block */)a0;
- (void)p_enumerateCellsAddedAndRemovedOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)p_enumerateCellsAddedOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)p_enumerateColumnCellCountDiffUsingBlock:(id /* block */)a0;
- (void)p_enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id /* block */)a0;
- (void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id /* block */)a0;
- (void)p_enumerateRowCellCountDiffUsingBlock:(id /* block */)a0;
- (void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (void)p_gatherRowState:(id /* block */)a0;
- (id)p_interestingCellIndexes;
- (void)p_invokeBlock:(id /* block */)a0;
- (void)p_pruneCellsAtColumn:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;
- (void)p_pruneCellsAtRow:(unsigned long long)a0 rowsSize:(unsigned long long)a1 columnsSize:(unsigned long long)a2;
- (void)p_pruneToBaseWithBaseMap:(id)a0 viewMap:(id)a1;
- (void)p_setObjectLocale:(id)a0;
- (void)p_setupInterestingCells:(void *)a0 interestingCellIndexes:(id)a1 forAdding:(BOOL)a2;
- (void)p_simpleInvokeBlock:(id /* block */)a0;

@end
