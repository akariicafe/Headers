@class __end_cap_, __end_;

@interface TSTMergeAction : NSObject <NSCopying>

@property (nonatomic) int type;
@property (nonatomic) struct vector<TSKUIDStructTract, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *__begin_; struct TSKUIDStructTract *__end_; struct __compressed_pair<TSKUIDStructTract *, std::allocator<TSKUIDStructTract>> { struct TSKUIDStructTract *__value_; } __end_cap_; } uidRanges;
@property (nonatomic) struct vector<TSCEFormulaObject *, std::allocator<TSCEFormulaObject *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCEFormulaObject *__strong *, std::allocator<TSCEFormulaObject *>> { id *__value_; } x1; } mergeFormulas;
@property (nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } mergeFormulaIndexes;
@property (readonly, nonatomic) BOOL hasMergeFormulas;
@property (readonly, nonatomic) BOOL hasMultiRowMerge;

+ (struct TSKUIDStructTract { struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x0; struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *x0; struct TSKUIDStruct *x1; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *x0; } x2; } x1; })cellUIDRangeFromMergeFormula:(id)a0 calcEngine:(id)a1;
+ (id)mergeActionForGrowingRange:(const void *)a0 coveringRange:(const void *)a1 inTable:(id)a2;
+ (id)mergeActionForInsertingRange:(const void *)a0 inTable:(id)a1;
+ (id)mergeActionForRemovingRanges:(const void *)a0 inTable:(id)a1;
+ (id)stringForMergeType:(int)a0;

- (id).cxx_construct;
- (void)verify;
- (void).cxx_destruct;
- (id)initWithType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addFormula:(id)a0;
- (id)actionByExpandingWithAction:(id)a0;
- (void)addFormulaIndex:(unsigned long long)a0;
- (id)cellRegionForTable:(id)a0;
- (void)enumerateMergeFormulasUsingBlock:(id /* block */)a0;
- (id)initWithType:(int)a0 uidRange:(const void *)a1;
- (id)initWithType:(int)a0 uidRanges:(const void *)a1;
- (id)remapUIDsByColumnMap:(const void *)a0 rowMap:(const void *)a1 ownerMap:(const void *)a2;
- (id)shrinkAction;

@end
