@class ARUISpriteRenderState, ARUISpriteUniformsCache;
@protocol MTLBuffer;

@interface ARUISpritesRenderer : NSObject {
    id<MTLBuffer> _spriteVertexBuffer;
    id<MTLBuffer> _spriteIndexBuffer;
    unsigned long long _numIndicies;
    ARUISpriteRenderState *_spriteRenderState;
    ARUISpriteUniformsCache *_cache;
}

+ (void)clearCaches;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (void)_sharedInitWithDevice:(id)a0;
- (id)initWithDeviceSPI:(id)a0 librarySPI:(id)a1;
- (void)renderSpriteSheet:(id)a0 intoContext:(id)a1 withCommandEncoder:(id)a2;

@end
