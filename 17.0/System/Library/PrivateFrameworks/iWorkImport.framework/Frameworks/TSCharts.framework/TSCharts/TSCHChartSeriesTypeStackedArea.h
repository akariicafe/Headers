@interface TSCHChartSeriesTypeStackedArea : TSCHChartSeriesTypeArea

- (id)init;
- (double)beginDataValueForSeries:(id)a0 groupIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (double)beginDataValueForSeries:(id)a0 valueIndex:(unsigned long long)a1 valueAxisID:(id)a2;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapStackedArea;
- (id)genericToSpecificPropertyMap;
- (BOOL)supportsSymbolDrawing;
- (id)userInterfaceName;

@end
