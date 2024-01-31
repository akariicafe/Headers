@class NSMutableArray;

@interface TSTConcurrentCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering>

@property (nonatomic, getter=isUIDBased) BOOL uidBased;
@property (retain, nonatomic) NSMutableArray *cellLists;
@property (retain, nonatomic) NSMutableArray *mergeActions;
@property (retain, nonatomic) NSMutableArray *inverseMergeActions;
@property (nonatomic) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } cachedRowUIDs;
@property (nonatomic) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } cachedColumnUIDs;
@property (nonatomic) BOOL applyingToTable;
@property (nonatomic) BOOL mayModifyFormulasInCells;
@property (nonatomic) BOOL mayModifyValuesReferencedByFormulas;
@property (readonly, nonatomic) BOOL affectsCellBorders;

+ (id)concurrentCellMapWithContext:(id)a0 cellUIDRange:(struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })a1 repeatCellVectorPattern:(const void *)a2 patternDirection:(long long)a3 uidBased:(BOOL)a4 affectsCellBorders:(BOOL)a5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)cellCount;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)changeDescriptorsForTable:(id)a0;
- (void)addMergeAction:(id)a0;
- (id)affectedBaseColumnAndRowIndexes;
- (void)appendCellList:(id)a0;
- (const void *)rowUIDs;
- (void)gatherRowState:(id /* block */)a0;
- (void)accumulateBordersConcurrentlyUsingBlock:(id /* block */)a0 accumulateCellsConcurrentlyUsingBlock:(id /* block */)a1;
- (void)addHeadMergeAction:(id)a0;
- (void)addMergeActions:(id)a0;
- (void)appendCellLists:(id)a0;
- (id)cellRegionWithTableInfo:(id)a0;
- (id)cellRegionWithTableInfo:(id)a0 passingTest:(id /* block */)a1;
- (struct vector<TSKUIDStructTract, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *x0; struct TSKUIDStructTract *x1; struct __compressed_pair<TSKUIDStructTract *, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *x0; } x2; })cellUIDRanges;
- (void)clearDataListIDs;
- (void)clearMerges;
- (const void *)columnUIDs;
- (BOOL)containsCellChanges;
- (BOOL)containsMergeChanges;
- (void)convertToInverseCellMap;
- (void)convertToUuidBasedCellMapUsingTableInfo:(id)a0 pruneCategorizedCells:(BOOL)a1;
- (void)enumerateCellsAddedAndRemovedOfType:(unsigned long long)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateCellsAddedOfType:(unsigned long long)a0 withOptions:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateColumnCellCountDiffUsingBlock:(id /* block */)a0;
- (void)enumerateCustomFormatsBeingAddedUsingReplacementBlock:(id /* block */)a0;
- (void)enumerateRowCellCountDiffUsingBlock:(id /* block */)a0;
- (void)enumerateRowsOfCellsConcurrentlyUsingBlock:(id /* block */)a0;
- (void)enumerateSeriallyUsingBlock:(id /* block */)a0;
- (unsigned long long)estimatedMemoryCost;
- (BOOL)hasCells;
- (BOOL)hasMultipleCells;
- (id)initWithContext:(id)a0 affectsCellBorders:(BOOL)a1;
- (id)initWithContext:(id)a0 uidBased:(BOOL)a1 affectsCellBorders:(BOOL)a2;
- (void)p_cacheRowColumnUIDs;
- (void)p_enumerateCellsAddedAndRemovedForFormatsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)p_enumerateNewAndOldCellsSeriallyUsingBlock:(id /* block */)a0;
- (void)pushInverseMergeAction:(id)a0;
- (void)updateDataListsConcurrentlyUsingCommentStorageBlock:(id /* block */)a0 conditionalStyleSetBlock:(id /* block */)a1 controlCellSpecBlock:(id /* block */)a2 formulaBlock:(id /* block */)a3 formulaErrorBlock:(id /* block */)a4 importWarningSetBlock:(id /* block */)a5 richTextBlock:(id /* block */)a6 stringBlock:(id /* block */)a7 styleBlock:(id /* block */)a8 customFormatBlock:(id /* block */)a9 formatBlock:(id /* block */)a10;
- (struct vector<TSUViewCellRect, std::allocator<TSUViewCellRect>> { struct TSUViewCellRect *x0; struct TSUViewCellRect *x1; struct __compressed_pair<TSUViewCellRect *, std::allocator<TSUViewCellRect>> { struct TSUViewCellRect *x0; } x2; })viewCellRects;
- (void)willApplyToTable:(id)a0;
- (void)willApplyToTableModel:(id)a0;

@end
