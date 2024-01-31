@interface TSCH3DShaderEffect : NSObject <TSCH3DShaderEffectStateInfo>

+ (id)effect;
+ (Class)stateClass;
+ (id)stateSharingID;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)stateClass;
- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (BOOL)alwaysUploadData;
- (void)injectGLSLInto:(id)a0 context:(id)a1;
- (void)injectMetalShaderInto:(id)a0 context:(id)a1;
- (id)stateSharingID;
- (void)updateState:(id)a0 effectsStates:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1 updateCurrentStates:(id)a2;

@end
