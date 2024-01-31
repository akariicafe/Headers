@interface TDreamSobelOpt : TDreamProgramWrapper {
    float offset[2];
    int offsetUniform;
}

- (id)init;
- (void)setOffset:(const float *)a0;
- (void)setUniforms;

@end
