@interface PRWidgetMetricsProvider : NSObject

+ (id)sharedInstance;

- (struct CGSize { double x0; double x1; })_sizeForItemWithGridWidth:(long long)a0 height:(long long)a1;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)a0;
- (id)_complicationRectangularMetrics;
- (id)_complicationInlineMetrics;
- (id)previewMetricsSpecificationForDeviceContext:(id)a0 displayContext:(id)a1 bundleIdentifier:(id)a2;
- (id)systemMetricsForWidget:(id)a0;
- (long long)_complicationFontStyle;
- (struct CHSEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsets;
- (id)_transparentMediumMetrics;
- (double)_scaleFactor;
- (id)lockScreenWidgetMetricsSpecifications;
- (double)_insetScreenWidth;
- (id)_complicationCircularMetrics;
- (id)_systemSmallMetrics;

@end
