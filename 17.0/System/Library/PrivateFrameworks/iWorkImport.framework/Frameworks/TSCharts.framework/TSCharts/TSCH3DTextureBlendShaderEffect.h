@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)effect;
+ (id)_singletonAlloc;
+ (id)variableTexture;
+ (void)setBlendFactor:(float)a0 unit:(long long)a1 effectsStates:(id)a2;
+ (id)variableBlendFactor;
+ (id)variableBlendTexture;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableBlendFactor;
- (id)variableBlendTexture;

@end
