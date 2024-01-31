@interface TSCHChartFeaturePieFamily : TSCHChartFeature

- (unsigned long long)maxCellsToCheckForGridValueType;
- (BOOL)supportsMultipleValuesPerSeries;
- (int)representativeGridValueAxisType;
- (BOOL)supportsPercentNumberFormatting;
- (id)animationDeliveryStylesForFilter:(id)a0;
- (BOOL)editableFormatForValueStrings;
- (id)genericToSpecificPropertyMap;
- (BOOL)hasExplodableSeriesElements;
- (BOOL)hasFixedFrameRatio;
- (id)initWithChartType:(id)a0;
- (id)initialSceneWithChartInfo:(id)a0 layoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a1;
- (BOOL)rendersBackgroundAxis;
- (BOOL)rendersUsingRadialGeometry;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (BOOL)supportsBackgroundFill;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsBorderStroke;
- (BOOL)supportsCategoryLabelsInChartRangeEditor;
- (BOOL)supportsElementSeriesNames;
- (BOOL)supportsErrorBars;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsLabelExplosion;
- (BOOL)supportsReferenceLines;
- (BOOL)supportsStartAngleRotation;
- (BOOL)supportsTrendLines;
- (BOOL)supportsValueLabelSpacing;
- (void)updateTitlesForExportingModel:(id)a0 info:(id)a1;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
