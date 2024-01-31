@class TSTFormulaRewriteSpec, TSCECalculationEngine;

@interface TSTConvertFormulasForCategoriesByRewritingWrapper : NSObject {
    TSTFormulaRewriteSpec *_rewriteSpecBaseToChrome;
    TSTFormulaRewriteSpec *_rewriteSpecChromeToBase;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic) TSTFormulaRewriteSpec *rewriteSpec;

+ (BOOL)isMoveRewriteType:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initWithCalcEngine:(id)a0 rewriteSpec:(id)a1;
- (id)convertFromBaseToChromeForCategorizedTableMove:(id)a0 containingCell:(const struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } *)a1;
- (id)convertFromChromeToBaseForCategorizedTableMove:(id)a0 containingCell:(const struct TSCEFormulaContainingCell { struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x1; BOOL x2; BOOL x3; } *)a1;

@end
