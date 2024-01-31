@class NSArray, NSMutableArray, NSValue;

@interface PXLayoutMetricInterpolator : NSObject {
    struct { BOOL referenceValuesByMetricsOrder; } _needsUpdateFlags;
}

@property (class, readonly, nonatomic) NSArray *allLayoutMetricConfigurationSizes;

@property (readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics;
@property (nonatomic, setter=_setCachedMetric:) double _cachedMetric;
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue;

+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (id)photosDetailsEdgeInsetsInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (id)_sharedGridEdgeInsetsInterpolator;
+ (struct CGSize { double x0; double x1; })bestItemSizeForAvailableWidth:(double)a0 screenScale:(double)a1 columns:(unsigned long long)a2 bestSpacing:(double *)a3 bestInset:(double *)a4;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (struct CGSize { double x0; double x1; })zoomableGridLayoutSmallItemSizeForWidth:(double)a0;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)_sharedGridItemWidthInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (double)locketGadgetColumnWidthForLayoutWidth:(struct CGSize { double x0; double x1; })a0 layoutMargins:(double)a1 interSpacing:(double)a2 isPhone:(BOOL)a3;
+ (id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)a0;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize { double x0; double x1; })a0;
+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)a0;
+ (id)layoutMarginWidthInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;

- (id)init;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (void)_getReferenceValueForMetric:(double)a0 exactMatch:(id *)a1 closestBeforeMatch:(id *)a2 closestAfterMatch:(id *)a3;
- (void)_setNeedsUpdate;
- (void)setReferenceValue:(double)a0 forMetric:(double)a1;
- (id)description;
- (double)valueForMetric:(double)a0;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (void).cxx_destruct;
- (id)_valueForMetric:(double)a0 fromInterpolationBetweenValue:(id)a1 secondValue:(id)a2;

@end
