@class UIColor, PXGShader, PXGUniform;

@interface PXGTextLegibilityEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_values;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double alpha;
@property (nonatomic) double strength;

- (id)initWithEntityManager:(id)a0;
- (id)shader;
- (void).cxx_destruct;
- (void)_updateValues;

@end
