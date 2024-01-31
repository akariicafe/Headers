@class PXGShader, PXGUniform;

@interface PXGEdgeFadeEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_directionUniform;
}

@property (nonatomic) long long direction;

- (id)initWithEntityManager:(id)a0;
- (id)shader;
- (void).cxx_destruct;

@end
