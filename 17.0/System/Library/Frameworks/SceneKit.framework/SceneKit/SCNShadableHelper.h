@class NSMutableArray, NSArray, NSDictionary, NSNumber, SCNProgram;

@interface SCNShadableHelper : NSObject <NSSecureCoding> {
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSArray *_c3dShaderModifierCache;
    NSNumber *_minimumLanguageVersion;
    NSMutableArray *_argumentsNames;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *shaderModifiers;
@property (retain, nonatomic) NSNumber *minimumLanguageVersion;
@property (retain, nonatomic) SCNProgram *program;
@property (readonly, nonatomic) id owner;
@property (readonly, nonatomic) NSArray *shaderModifiersArgumentsNames;

- (BOOL)isOpaque;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOwner:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (struct __C3DFXTechnique { } *)_technique;
- (void *)__CFObject;
- (BOOL)_bindValueForSymbol:(id)a0 atLocation:(unsigned int)a1 programID:(unsigned int)a2 node:(id)a3 renderer:(id)a4;
- (void)_customDecodingOfSCNShadableHelper:(id)a0;
- (void)_customEncodingOfSCNShadableHelper:(id)a0;
- (void)_didDecodeSCNShadableHelper:(id)a0;
- (void)_parseAndSetShaderModifier:(id)a0;
- (void)_programDidChange:(id)a0;
- (struct __C3DFXGLSLProgram { } *)_programFromPassAtIndex:(long long)a0;
- (void)_setC3DProgram;
- (void)_setC3DProgramDelegate;
- (void)_startObservingProgram;
- (void)_stopObservingProgram;
- (void)_unbindValueForSymbol:(id)a0 atLocation:(unsigned int)a1 programID:(unsigned int)a2 node:(id)a3 renderer:(id)a4;
- (void)_updateAllC3DProgramInputs;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram { } *)a0 forSymbol:(id)a1;
- (void)_updateC3DProgramInputForSymbol:(id)a0;
- (void)copyModifiersFrom:(id)a0;
- (void)handleBindingOfSymbol:(id)a0 usingBlock:(id /* block */)a1;
- (void)handleUnbindingOfSymbol:(id)a0 usingBlock:(id /* block */)a1;
- (void)ownerWillDie;

@end
