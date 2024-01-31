@interface TSCH3DPhongLikeShaderEffect : TSCH3DShaderEffect

- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)injectAmbientToProgram:(id)a0;
- (void)injectDiffuseToProgram:(id)a0;
- (void)injectEmissiveToProgram:(id)a0;
- (void)injectSpecularToProgram:(id)a0;

@end
