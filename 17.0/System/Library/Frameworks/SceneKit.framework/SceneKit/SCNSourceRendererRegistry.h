@interface SCNSourceRendererRegistry : NSObject {
    struct __CFDictionary { } *_registry;
}

+ (id)sharedRegistry;

- (id)init;
- (void)dealloc;
- (void)rendererDidChange:(id)a0;
- (void)removeSourceRenderersForSource:(id)a0;
- (void)endFrameForEngineContext:(struct __C3DEngineContext { } *)a0;
- (void)removeSourceRenderersForEngineContext:(struct __C3DEngineContext { } *)a0;
- (id)sourceRendererForEngineContext:(struct __C3DEngineContext { } *)a0 source:(id)a1 textureSource:(id)a2 targetTexture:(id)a3;

@end
