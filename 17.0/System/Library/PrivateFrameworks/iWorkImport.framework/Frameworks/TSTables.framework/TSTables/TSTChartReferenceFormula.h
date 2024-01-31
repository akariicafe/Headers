@interface TSTChartReferenceFormula : TSTWrappedFormula

- (id)initWithCalculationEngine:(id)a0 expressionTree:(id)a1 baseHostCell:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a2 hostTable:(id)a3;
- (void)reparseWithStorage:(id)a0;

@end
