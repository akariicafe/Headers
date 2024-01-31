@interface TDreamVignette : TDreamProgramWrapper {
    int vignetteCenterUniform;
    int vignetteColorUniform;
    int vignetteStartUniform;
    int vignetteEndUniform;
}

@property (nonatomic) struct CGPoint { double x; double y; } vignetteCenter;
@property (nonatomic) struct TDColor3 { float one; float two; float three; } vignetteColor;
@property (nonatomic) double vignetteStart;
@property (nonatomic) double vignetteEnd;

- (id)init;
- (void)setUniforms;

@end
