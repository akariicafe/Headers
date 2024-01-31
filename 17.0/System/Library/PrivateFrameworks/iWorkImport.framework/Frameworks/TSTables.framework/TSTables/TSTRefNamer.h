@class TSCECalculationEngine, NSString, NSCharacterSet;

@interface TSTRefNamer : NSObject <TSCERefNamingProtocol>

@property (retain, nonatomic) NSCharacterSet *whitespaceAndNewlineCharSet;
@property (retain, nonatomic) NSCharacterSet *nonWhitespaceAndNewlineCharSet;
@property (readonly, weak, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)cellRangeName:(id)a0 namingContext:(id)a1;
- (id)cellRangeNameFromChromeRangeRef:(const void *)a0 namingContext:(id)a1;
- (id)chromeNameForBaseRangeRef:(const void *)a0 namingContext:(id)a1;
- (id)columnNameForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 restrictToBodyRange:(BOOL)a1 translator:(id)a2 cellRangeContainingName:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a3;
- (id)columnNameForColumnIndex:(unsigned short)a0 withFallbackFormat:(id)a1 translator:(id)a2;
- (id)createNameComponentWithChromeRangeRef:(const void *)a0 rowOrColumnName:(id)a1 isSticky:(BOOL)a2 namingContext:(id)a3;
- (id)initWithCalcEngine:(id)a0;
- (id)nameForBaseRangeRef:(const void *)a0 namingContext:(id)a1;
- (id)nameForBaseTractRef:(id)a0 namingContext:(id)a1;
- (id)nameForChromeColumnIndex:(const struct TSUChromeColumnIndex { unsigned short x0; } *)a0 inTable:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 useSymbolicNames:(BOOL)a2;
- (id)nameForChromeRangeRef:(const void *)a0 namingContext:(id)a1;
- (id)nameForViewTractRef:(id)a0 namingContext:(id)a1 coordMapper:(id)a2;
- (id)nameForWrappedRangeRef:(id)a0 namingContext:(id)a1;
- (id)p_symbolicColumnNameForRefPair:(id)a0 useTopLeft:(BOOL)a1 isSticky:(BOOL)a2 foundRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; } *)a3 inTableModel:(id)a4 namingContext:(id)a5;
- (id)p_symbolicRowNameForRefPair:(id)a0 useTopLeft:(BOOL)a1 isSticky:(BOOL)a2 foundRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; } *)a3 inTableModel:(id)a4 namingContext:(id)a5;
- (id)rowNameForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 restrictToBodyRange:(BOOL)a1 translator:(id)a2 cellRangeContainingName:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } *)a3;
- (id)stringForRangeRefPair:(id)a0 namingContext:(id)a1;
- (id)stringValueAtCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 translator:(id)a1;

@end
