@interface TSCH3DProjectiveTextureShaderEffect : TSCH3DShaderEffect

+ (id)variableTexture;
+ (id)stateSharingID;
+ (id)variableShadowBorderFade;
+ (id)variableShadowColor;

- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)variableTexture;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableShadowBorderFade;
- (id)variableShadowColor;

@end
