@class ARUISpriteParticleRenderState;
@protocol MTLBuffer;

@interface ARUISpritesParticleRenderer : NSObject {
    id<MTLBuffer> _spriteVertexBuffer;
    id<MTLBuffer> _spriteIndexBuffer;
    unsigned long long _numIndicies;
    id<MTLBuffer> _vertexAttributesBuffer;
    id<MTLBuffer> _uniformsBuffer;
    ARUISpriteParticleRenderState *_spriteRenderState;
    unsigned long long _bufferSize;
}

- (void).cxx_destruct;
- (void)_sharedInitWithDevice:(id)a0 bufferSize:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 library:(id)a1 bufferSize:(unsigned long long)a2;
- (id)initWithDeviceSPI:(id)a0 librarySPI:(id)a1 bufferSize:(unsigned long long)a2;
- (void)renderSpriteSheet:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2;

@end
