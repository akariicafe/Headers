@class MTMaterialView, UIView;

@interface SBElasticSliderView : CCUIContinuousSliderView {
    MTMaterialView *_captureOnlyMaterialView;
    MTMaterialView *_baseMaterialView;
    UIView *_shadowView;
    UIView *_maskView;
}

@property (nonatomic) double cornerRadiusMinorAxisFraction;
@property (nonatomic) double regularMinorAxisDimension;
@property (nonatomic) double compactMinorAxisDimension;
@property (nonatomic) double additiveGlyphScaleFactor;
@property (nonatomic) unsigned long long shadowMode;
@property (retain, nonatomic) UIView *leadingAccessoryView;
@property (retain, nonatomic) UIView *trailingAccessoryView;
@property (nonatomic) unsigned long long accessoryLayoutEdge;
@property (nonatomic) unsigned long long accessoryViewPadding;

- (void)layoutElasticContentViews;
- (void)setContinuousSliderCornerRadius:(double)a0;
- (void)_updateCornerRadius;
- (void)setAxis:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)createBackgroundView;
- (struct CGPoint { double x0; double x1; })glyphCenter;
- (BOOL)shouldAlwaysEnableButtonElasticity;
- (id)_createElasticBackgroundView;
- (struct CGPoint { double x0; double x1; })_elasticGlyphCenterForDefaultGlyphCenter:(struct CGPoint { double x0; double x1; })a0;
- (double)_fractionToRegularMetrics;
- (void)_layoutAccessoryViews;
- (double)_minorAxisElasticLength;
- (void)_updateGlyphScaleForAdditiveScaleOrAxisUpdate;
- (void)_updateShadowMode;

@end
