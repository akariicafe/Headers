@interface TSCHChartFeatureScatter : TSCHChartFeature

- (BOOL)supportsSharedAndSeparateX;
- (int)representativeGridValueAxisType;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)a0;
- (id)initWithChartType:(id)a0;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsSymbolOverhang;
- (BOOL)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
