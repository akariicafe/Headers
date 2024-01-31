@interface TSCH3DTexCoordTilingShaderEffect : TSCH3DShaderEffect

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)effect;
+ (void)initialize;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)transformedTexcoordBuffer:(id)a0 effectsStates:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;

@end
