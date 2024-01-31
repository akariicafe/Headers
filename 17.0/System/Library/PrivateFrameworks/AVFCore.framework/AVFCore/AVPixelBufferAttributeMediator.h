@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } *_mediator;
}

- (id)init;
- (id)mediatedPixelBufferAttributes;
- (void)dealloc;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)a0;
- (void)setLayersAreSuppressed:(BOOL)a0;
- (void)setRequestedPixelBufferAttributes:(id)a0 forKey:(id)a1;

@end
