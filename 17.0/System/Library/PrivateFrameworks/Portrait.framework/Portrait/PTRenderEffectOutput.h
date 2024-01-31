@protocol MTLTexture;

@interface PTRenderEffectOutput : NSObject

@property (readonly) id<MTLTexture> effectRGBA;
@property (readonly) id<MTLTexture> effectDepth;

- (void).cxx_destruct;
- (id)initWithEffectRGBA:(id)a0 effectDepth:(id)a1;

@end
