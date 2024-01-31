@interface ARUISpriteUniforms : NSObject

@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ columns[4]; } transformMatrix; } vertexAttributes;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ textureRect; float opacity; } uniforms;

- (void)_updateUniformsWithSprite:(id)a0;
- (void)_updateVertexAttributesWithSprite:(id)a0 inContet:(id)a1;
- (id)initWithSprite:(id)a0 inContext:(id)a1;
- (void *)uniformsBytes;
- (void *)vertexAttributesBytes;

@end
