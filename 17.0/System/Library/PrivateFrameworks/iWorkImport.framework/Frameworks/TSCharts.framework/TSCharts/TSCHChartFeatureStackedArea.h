@interface TSCHChartFeatureStackedArea : TSCHChartFeatureArea

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
- (BOOL)supportsInterSetDepthGap;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsTrendLines;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
