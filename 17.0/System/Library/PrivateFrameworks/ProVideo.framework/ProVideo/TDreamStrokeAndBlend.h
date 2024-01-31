@interface TDreamStrokeAndBlend : TDreamProgramWrapperTwoInput {
    int sigmaUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setUniforms;

@end
