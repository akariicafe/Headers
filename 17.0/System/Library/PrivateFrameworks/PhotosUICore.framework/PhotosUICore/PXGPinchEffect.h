@class PXGShader, PXGUniform;

@interface PXGPinchEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_normalizedCenter;
    PXGUniform *_scale;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedCenter;
@property (nonatomic) double scale;

- (id)initWithEntityManager:(id)a0;
- (id)shader;
- (void).cxx_destruct;

@end
