@interface TSCHChartFeatureStackedColumn : TSCHChartFeatureColumn

- (BOOL)supportsCategoryAxisSeriesNames;
- (id)defaultDataFileName;
- (BOOL)drawValueLabelsForZero;
- (BOOL)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (double)maxDepthRatio;
- (Class)presetImagerClass;
- (BOOL)reverseSingleColumnLegendOrder;
- (double)sageMaxDepthRatio;
- (double)spiceMaxDepthRatio;
- (int)stackingSignRule;
- (id)supportedAxisScales;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSeriesLabels;
- (BOOL)supportsTrendLines;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
