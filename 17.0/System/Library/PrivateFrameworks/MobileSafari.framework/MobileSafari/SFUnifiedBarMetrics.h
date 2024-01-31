@class UITraitCollection;

@interface SFUnifiedBarMetrics : NSObject {
    UITraitCollection *_traitCollection;
}

@property (class, readonly, nonatomic) double defaultItemHeight;
@property (class, readonly, nonatomic) double minimumSquishScale;
@property (class, readonly, nonatomic) double separatorWidth;
@property (class, readonly, nonatomic) double squishedInlineBarHeight;
@property (class, readonly, nonatomic) double transitioningItemScale;
@property (class, readonly, nonatomic) double defaultSquishedContentSpacing;

@property (nonatomic) long long metricsCategory;
@property (readonly, nonatomic) double cutoutBorderWidth;
@property (readonly, nonatomic) double defaultItemHeight;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) double itemHeight;
@property (readonly, nonatomic) double leadingTabIconInset;
@property (readonly, nonatomic) double maximumItemSpacing;
@property (readonly, nonatomic) double minimumItemSpacing;
@property (readonly, nonatomic) double squishedInlineBarHeight;
@property (readonly, nonatomic) double tabCloseButtonWidth;

- (double)_scaledValueForValue:(double)a0;
- (id)initWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (void)_updateMetrics;
- (BOOL)_updateWithContentSizeCategory:(id)a0 legibilityWeight:(long long)a1;
- (BOOL)updateWithTraitCollection:(id)a0;

@end
