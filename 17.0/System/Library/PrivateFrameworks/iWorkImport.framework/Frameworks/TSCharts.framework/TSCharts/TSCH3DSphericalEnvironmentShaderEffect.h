@class NSArray, TSCH3DTexturePool;

@interface TSCH3DSphericalEnvironmentShaderEffect : TSCH3DShaderEffect {
    NSArray *_materials;
    TSCH3DTexturePool *_pool;
}

+ (Class)stateClass;
+ (id)effectWithMaterials:(id)a0 pool:(id)a1;

- (unsigned long long)count;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)initWithMaterials:(id)a0 pool:(id)a1;
- (id)textureVariablesArray;
- (void)updateState:(id)a0 effectsStates:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;

@end
