@class TSCH3DMaterialShaderVariables, TSCH3DTexturesMaterial, TSCH3DTexturePool;

@interface TSCH3DMaterialShaderEffect : TSCH3DShaderEffect {
    TSCH3DTexturePool *_pool;
    TSCH3DTexturesMaterial *_material;
    TSCH3DMaterialShaderVariables *_variables;
}

+ (id)effectWithPool:(id)a0 material:(id)a1 variables:(id)a2;
+ (id)stateSharingID;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addVariables:(id)a0;
- (void)affectStates:(id)a0;
- (id)initWithPool:(id)a0 material:(id)a1 variables:(id)a2;
- (id)stateSharingID;
- (void)updateState:(id)a0 effectsStates:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;

@end
