@class BSUIVibrancyShadowValues, CAFilter;

@interface BSUIVibrancyShadowView : BSUIVibrancyView {
    CAFilter *_vibrantColorFilter;
    BSUIVibrancyShadowValues *_values;
}

@property (class, readonly, nonatomic) struct CGPoint { double x0; double x1; } defaultShadowStartPoint;
@property (class, readonly, nonatomic) struct CGPoint { double x0; double x1; } defaultShadowEndPoint;

@property (nonatomic) struct CGPoint { double x0; double x1; } shadowStartPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } shadowEndPoint;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)gradientLayer;
- (id)_defaultGradientColors;
- (void).cxx_destruct;
- (void)updateFilters;

@end
