@class UIColor, PXGShader, PXGUniform;

@interface PXGColorTintEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_tintColorUniform;
}

@property (retain, nonatomic) UIColor *tintColor;

- (id)initWithEntityManager:(id)a0;
- (id)shader;
- (void).cxx_destruct;

@end
