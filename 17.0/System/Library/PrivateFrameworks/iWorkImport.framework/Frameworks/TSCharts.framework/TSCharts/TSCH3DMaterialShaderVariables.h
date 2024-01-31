@class TSCH3DShaderVariable;

@interface TSCH3DMaterialShaderVariables : NSObject <NSCopying>

@property (readonly, retain, nonatomic) TSCH3DShaderVariable *texture;
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *intensity;
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *factor;
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *textureColor;
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *color;
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *modulation;
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *texcoords;
@property (readonly, retain, nonatomic) TSCH3DShaderVariable *textureMatrix;

+ (id)variablesWithTexture:(id)a0 intensity:(id)a1 factor:(id)a2 textureColor:(id)a3 color:(id)a4 modulation:(id)a5 texcoords:(id)a6 textureMatrix:(id)a7;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTexture:(id)a0 intensity:(id)a1 factor:(id)a2 textureColor:(id)a3 color:(id)a4 modulation:(id)a5 texcoords:(id)a6 textureMatrix:(id)a7;

@end
