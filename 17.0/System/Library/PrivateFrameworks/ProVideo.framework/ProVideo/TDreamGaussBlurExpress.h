@interface TDreamGaussBlurExpress : TDreamProgramWrapper {
    float sigmaUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setUniforms;

@end
