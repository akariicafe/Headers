@class NSSet, TSCH3DVersion, TSCH3DShaderResource;

@interface TSCH3DShaderContext : NSObject {
    struct ObjectStateMatchObject { struct ObjcSharedPtr<NSSet> { NSSet *mValue; } _effects; struct vector<TSCH3D::ResourceAttributeState, std::allocator<TSCH3D::ResourceAttributeState>> { struct ResourceAttributeState *__begin_; struct ResourceAttributeState *__end_; struct __compressed_pair<TSCH3D::ResourceAttributeState *, std::allocator<TSCH3D::ResourceAttributeState>> { struct ResourceAttributeState *__value_; } __end_cap_; } _attributes; struct vector<TSCH3D::TextureAttributeState, std::allocator<TSCH3D::TextureAttributeState>> { struct TextureAttributeState *__begin_; struct TextureAttributeState *__end_; struct __compressed_pair<TSCH3D::TextureAttributeState *, std::allocator<TSCH3D::TextureAttributeState>> { struct TextureAttributeState *__value_; } __end_cap_; } _textures; } _state;
}

@property (retain, nonatomic) TSCH3DVersion *version;
@property (retain, nonatomic) TSCH3DShaderResource *shader;
@property (copy, nonatomic) NSSet *debugEffects;

- (unsigned long long)hash;
- (const void *)state;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)diffEffects:(id)a0;
- (id)discardStatement;
- (id)initWithObjectState:(const void *)a0 version:(id)a1;
- (struct TextureAttributes { int x0; int x1; BOOL x2; BOOL x3; BOOL x4; struct TextureSizeHint { int x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } x5; BOOL x6; })textureAttributesForVariable:(id)a0;
- (id)textureFunctionNameForVariable:(id)a0 projective:(BOOL)a1;
- (id)textureVariables;

@end
