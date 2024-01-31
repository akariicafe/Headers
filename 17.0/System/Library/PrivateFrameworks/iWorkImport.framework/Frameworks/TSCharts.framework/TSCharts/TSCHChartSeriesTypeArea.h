@interface TSCHChartSeriesTypeArea : TSCHChartSeriesType

- (id)init;
- (int)legendBadgeType;
- (unsigned long long)valueDimensions;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapArea;
- (id)genericToSpecificPropertyMap;
- (int)seriesElementType;
- (BOOL)supportsDownsampling;
- (BOOL)supportsSymbolDrawing;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (id)userInterfaceName;

@end
