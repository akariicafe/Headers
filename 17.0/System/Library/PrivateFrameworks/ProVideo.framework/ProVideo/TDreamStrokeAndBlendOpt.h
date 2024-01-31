@interface TDreamStrokeAndBlendOpt : TDreamProgramWrapperTwoInput {
    float oneOverSize[2];
    int oneOverSizeUniform;
}

- (id)init;
- (void)setOneOverSize:(const float *)a0;
- (void)setUniforms;

@end
