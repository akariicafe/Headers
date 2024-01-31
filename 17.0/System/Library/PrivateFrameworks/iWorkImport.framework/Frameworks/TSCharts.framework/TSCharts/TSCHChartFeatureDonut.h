@interface TSCHChartFeatureDonut : TSCHChartFeaturePieFamily

- (float)defaultLabelExplosionPercentage;
- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (double)maxInnerRadiusPercentage;
- (double)minInnerRadiusPercentage;
- (Class)presetImagerClass;
- (BOOL)supportsCalloutLines;
- (BOOL)supportsPlaceTitleAtCenter;
- (id)userInterfaceName;

@end
