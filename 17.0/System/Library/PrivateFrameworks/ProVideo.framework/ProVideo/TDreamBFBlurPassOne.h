@interface TDreamBFBlurPassOne : TDreamProgramWrapperTwoInput {
    int sigmaColorUniform;
    int sigmaUniform;
}

@property (nonatomic) double sigma;
@property (nonatomic) double sigmaColor;

- (id)init;
- (void)setUniforms;

@end
