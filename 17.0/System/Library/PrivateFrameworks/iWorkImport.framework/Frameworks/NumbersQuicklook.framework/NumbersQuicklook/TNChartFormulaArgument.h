@class TSCECategoryRef, TSCECellTractRef, TSCEViewTractRef;

@interface TNChartFormulaArgument : NSObject {
    void *_data;
}

@property (readonly) unsigned long long type;
@property (readonly) BOOL isCellReference;
@property (readonly) BOOL isRangeReference;
@property (readonly) BOOL isTractReference;
@property (readonly) BOOL isCategoryReference;
@property (readonly) BOOL isGeometricReference;
@property (readonly) BOOL isViewTractReference;
@property (readonly) BOOL isStaticValue;
@property (readonly) BOOL isBadRef;
@property (readonly) BOOL isReference;
@property (readonly) struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } cellReference;
@property (readonly) struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } rangeReference;
@property (readonly) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; } *staticValue;
@property (readonly) TSCECategoryRef *categoryReference;
@property (readonly) TSCEViewTractRef *viewTractReference;
@property (readonly) TSCECellTractRef *tractReference;

- (void)dealloc;
- (id)description;
- (BOOL)isVisible:(id)a0;
- (id)initWithBadRef;
- (id)initWithCategoryReference:(id)a0;
- (id)initWithCellReference:(struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (id)initWithRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (id)initWithStaticValue:(const struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[32]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[11]; } x0; unsigned char x1; } *)a0;
- (id)initWithTractReference:(id)a0;
- (id)initWithViewTractReference:(id)a0;
- (unsigned long long)numberOfValuesWithCalcEngine:(id)a0 plotByRow:(BOOL)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })tableUID:(id)a0;

@end
