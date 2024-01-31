@interface TSCH3DOnePassBlurShaderEffect : TSCH3DShaderEffect

+ (id)variableTexture;
+ (id)variableBlurTexCoord;
+ (id)variablePixelSize;

- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)variableTexture;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableBlurTexCoord;
- (id)variablePixelSize;

@end
