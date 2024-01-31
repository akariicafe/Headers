@interface TDreamStroke : TDreamProgramWrapper {
    int sigmaUniform;
}

@property (nonatomic) double sigma;

- (id)init;
- (void)setUniforms;

@end
