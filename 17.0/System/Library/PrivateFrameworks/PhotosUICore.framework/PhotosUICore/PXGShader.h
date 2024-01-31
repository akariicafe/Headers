@class NSArray, NSDictionary, PXGShaderSource, NSMutableData;

@interface PXGShader : NSObject {
    NSDictionary *_sourceByShaderFunction;
    NSArray *_valueUniforms;
    NSArray *_texture2DUniforms;
    NSArray *_texture3DUniforms;
    NSMutableData *_valueUniformsData;
}

@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) struct { unsigned int fragmentTextureCoordinateOpcodes; unsigned int fragmentColorOpcodes; unsigned int fragmentAlphaOpcodes; } opcodes;
@property (readonly, copy, nonatomic) PXGShaderSource *source;
@property (readonly, copy, nonatomic) NSArray *uniforms;
@property (readonly, copy, nonatomic) NSDictionary *components;
@property (nonatomic) unsigned long long sampler;

- (id)init;
- (id)parameterBindingDeclarations;
- (id)description;
- (void)encodeBindableArgumentsWithEncoder:(id)a0;
- (id)initWithOpcodes:(struct { unsigned int x0; unsigned int x1; unsigned int x2; })a0 source:(id)a1 uniforms:(id)a2 components:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEquivalentToShader:(id)a0;

@end
