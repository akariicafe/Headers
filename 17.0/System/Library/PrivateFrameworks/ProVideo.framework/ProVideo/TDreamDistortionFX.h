@interface TDreamDistortionFX : TDreamProgramWrapper {
    int centerUniform;
    int modeUniform;
    float adjustUniform;
}

@property (nonatomic) int mode;
@property (nonatomic) float fine;
@property (nonatomic) struct CGPoint { double x; double y; } center;

- (id)init;
- (void)setUniforms;

@end
