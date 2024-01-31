@interface CHPChangeDirection : EDProcessor

- (void)addDataValue:(id)a0 to:(id)a1 withIndex:(unsigned long long)a2;
- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (void)changeBarColumnDirection:(id)a0;
- (void)changeChartDirection:(id)a0 sheet:(id)a1;
- (void)cleanUpOldSeriesCollection:(id)a0;
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)a0 forChart:(id)a1;
- (id)getGraphicPropertiesForSeriesWithIndex:(unsigned long long)a0 fromCollection:(id)a1 isVaryColors:(BOOL)a2 forChart:(id)a3;
- (id)getSeriesCollectionForOrthogonalDirection:(id)a0 forChart:(id)a1;
- (BOOL)isObjectSupported:(id)a0;
- (void)mapSeriesCollection:(id)a0 from:(id)a1 forChart:(id)a2;
- (void)mapSeriesValues:(id)a0 to:(id)a1 forIndex:(unsigned long long)a2 byRow:(BOOL)a3 forChart:(id)a4;

@end
