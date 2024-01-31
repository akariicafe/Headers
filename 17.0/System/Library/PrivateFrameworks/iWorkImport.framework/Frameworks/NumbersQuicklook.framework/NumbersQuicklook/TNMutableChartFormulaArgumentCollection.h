@interface TNMutableChartFormulaArgumentCollection : TNChartFormulaArgumentCollection

- (void)insertElement:(id)a0 atIndex:(unsigned long long)a1;
- (void)replaceElementAtIndex:(unsigned long long)a0 withElement:(id)a1;
- (void)addElement:(id)a0;
- (id)initWithArray:(id)a0;
- (void)removeElementAtIndex:(unsigned long long)a0;
- (void)removeLastElement;

@end
