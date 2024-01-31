@interface TSCHChartSeriesTypeBubble : TSCHChartSeriesTypeScatter

- (id)init;
- (int)legendBadgeType;
- (unsigned long long)valueDimensions;
- (id)axisTypesForValueLabels;
- (int)defaultSymbolType;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (int)fillSetFillProperty;
- (unsigned int)filterChartLabelPosition:(unsigned int)a0;
- (id)g_genericToSpecificPropertyMapBubble;
- (id)genericToSpecificPropertyMap;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (id)legalChartLabelPositions;
- (id)propertiesForReferenceColors;
- (int)seriesStrokeProperty;
- (id)supportedValueLabelsAxisCombinations;
- (BOOL)supportsFillSetFill;
- (BOOL)supportsLineConnectionStyle;
- (BOOL)supportsSeriesStroke;
- (BOOL)supportsSymbolTypeEditing;
- (id)userInterfaceName;

@end
