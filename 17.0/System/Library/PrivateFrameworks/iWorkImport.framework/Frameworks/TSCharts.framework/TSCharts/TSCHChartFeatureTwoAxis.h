@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory

- (BOOL)supportsEditing;
- (int)representativeGridValueAxisType;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (id)initWithChartType:(id)a0;
- (Class)presetImagerClass;
- (BOOL)requiresYAxisOrdinal;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsIndividualShadowRendering;
- (BOOL)supportsMultipleSeriesTypes;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
