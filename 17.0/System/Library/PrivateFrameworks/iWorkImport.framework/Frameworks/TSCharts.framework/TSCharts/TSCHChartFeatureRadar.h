@interface TSCHChartFeatureRadar : TSCHChartFeature

- (int)representativeGridValueAxisType;
- (id)defaultDataFileName;
- (BOOL)hasFixedFrameRatio;
- (id)initWithChartType:(id)a0;
- (BOOL)isNonSquareChartsEnabled;
- (Class)presetImagerClass;
- (unsigned long long)styleIndexForAxisID:(id)a0;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (BOOL)supportsAxisNames;
- (BOOL)supportsBorderFrame;
- (BOOL)supportsCategoryLabelExplosion;
- (BOOL)supportsConnectingLines;
- (BOOL)supportsEllipticalGridlines;
- (BOOL)supportsStartAngleRotation;
- (Class)valueAxisClassForID:(id)a0 scale:(long long)a1;

@end
