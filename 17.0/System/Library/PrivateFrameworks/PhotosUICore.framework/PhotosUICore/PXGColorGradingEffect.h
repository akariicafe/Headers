@class PXGShader, PXGUniform, PXGColorLookupCube;

@interface PXGColorGradingEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_cubeUniform;
    PXGUniform *_valuesUniform;
    PXGUniform *_grayUniform;
}

@property (retain, nonatomic) PXGColorLookupCube *colorLookupCube;
@property (nonatomic) float intensity;

- (unsigned long long)hash;
- (id)initWithEntityManager:(id)a0;
- (id)shader;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
