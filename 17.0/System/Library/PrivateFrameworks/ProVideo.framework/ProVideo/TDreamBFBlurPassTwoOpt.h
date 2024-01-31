@interface TDreamBFBlurPassTwoOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize[2];
    int oneOverSizeUniform;
}

@property (nonatomic) double sigma;
@property (nonatomic) double sigmaColor;

- (id)init;
- (void)setOneOverSize:(const float *)a0;
- (void)setUniforms;

@end
