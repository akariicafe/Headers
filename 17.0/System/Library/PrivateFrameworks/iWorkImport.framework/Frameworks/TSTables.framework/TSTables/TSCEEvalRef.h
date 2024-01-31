@interface TSCEEvalRef : NSObject <NSCopying> {
    struct TSCETableResolver { void /* function */ **x0; } *_tableResolver;
    struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _columns; struct TSUIndexSet { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; struct TSUIndexRange { long long _begin; long long _end; } _singleRange; struct *_multipleRanges; } _rows; struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID; unsigned char _spanType; struct TSUPreserveFlags { unsigned char _flags; } _preserveFlags; BOOL _preserveRectangular; BOOL _mixedColumnStartedWithPreserve; BOOL _mixedRowStartedWithPreserve; } _tractRef;
}

@property (readonly, nonatomic) struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } tableUID;
@property (readonly, nonatomic) struct TSCETableResolver { void /* function */ **x0; } *tableResolver;
@property (readonly, nonatomic) void *calcEngine;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } topLeft;
@property (readonly, nonatomic) struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } bottomRight;
@property (readonly, nonatomic) struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } rangeCoord;
@property (readonly, nonatomic) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } rangeRef;
@property (readonly, nonatomic) BOOL hasCachedValue;
@property (nonatomic) struct shared_ptr<TSCEValue> { struct TSCEValue *__ptr_; struct __shared_weak_count *__cntrl_; } cachedValue;
@property (nonatomic) BOOL cachedValueWasFetchedWithRichTextAttributes;

+ (id)mergeLeftRef:(id)a0 rightRef:(id)a1 outError:(int *)a2;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct TSCEFormat { id x0; unsigned int x1; unsigned char x2; struct TSCEDurationFormat { unsigned char x0 : 1; unsigned char x1 : 6; unsigned char x2 : 6; unsigned char x3 : 3; } x3; struct TSCEBaseFormat { unsigned char x0; unsigned char x1; BOOL x2; } x4; struct TSCEFractionFormat { char x0; } x5; struct TSCENumberFormat { unsigned char x0; unsigned char x1 : 3; unsigned char x2 : 1; unsigned char x3 : 1; unsigned short x4; } x6; })format:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (const struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; BOOL x5; BOOL x6; BOOL x7; } *)tractRef;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })bodyRangeOfTable;
- (id)canonicalCellReferenceForReference;
- (unsigned char)getHidingActionForRows:(BOOL)a0;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })getResolverUID;
- (id)initWithTableResolver:(struct TSCETableResolver { void /* function */ **x0; } *)a0 topLeft:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 bottomRight:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a2 preserveFlags:(const struct TSUPreserveFlags { unsigned char x0; } *)a3;
- (id)initWithTableResolver:(struct TSCETableResolver { void /* function */ **x0; } *)a0 tractRefCore:(const struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; BOOL x5; BOOL x6; BOOL x7; } *)a1;
- (id)makeCellReferenceForOffset:(const struct TSCEGridCoord { unsigned int x0; unsigned int x1; } *)a0 apparentTractRef:(const struct TSCECellTractRefCore { struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x0; struct TSUIndexSet { unsigned char x0 : 1; unsigned char x1 : 1; struct TSUIndexRange { long long x0; long long x1; } x2; struct *x3; } x1; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x2; unsigned char x3; struct TSUPreserveFlags { unsigned char x0; } x4; BOOL x5; BOOL x6; BOOL x7; } *)a1;
- (id)makeCellReferenceInSameTable:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)resetResolver:(void *)a0;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })scalarValueForEvalContext:(void *)a0 permitAccessInsideMergeRegions:(BOOL)a1 fetchRichTextAttributesIfPlainText:(BOOL)a2;
- (struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; })scalarValueFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 permitAccessInsideMergeRegions:(BOOL)a1 fetchRichTextAttributesIfPlainText:(BOOL)a2;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; })tableRangeOfTable;

@end
