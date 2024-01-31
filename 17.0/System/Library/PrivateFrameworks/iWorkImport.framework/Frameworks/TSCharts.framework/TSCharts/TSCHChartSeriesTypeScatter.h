@interface TSCHChartSeriesTypeScatter : TSCHChartSeriesType

- (id)init;
- (int)legendBadgeType;
- (unsigned long long)valueDimensions;
- (id)axisTypesForValueLabels;
- (id)elementBuilder;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapScatter;
- (id)genericToSpecificPropertyMap;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (id)propertiesForReferenceColors;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsDownsampling;
- (BOOL)supportsFillSetFill;
- (BOOL)supportsGridPartitioning;
- (BOOL)supportsLineConnectionStyle;
- (BOOL)supportsLineTypeNone;
- (BOOL)supportsSeriesFill;
- (BOOL)supportsSymbolDrawing;
- (BOOL)supportsSymbolFillForSymbolType:(int)a0;
- (BOOL)supportsValueLabelsAxisOption;
- (BOOL)supportsValueLabelsSeriesName;
- (id)userInterfaceName;

@end
