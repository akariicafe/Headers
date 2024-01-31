@protocol MTLTexture;

@interface PTTextureYUV : PTTexture

@property (retain) id<MTLTexture> texLuma;
@property (retain) id<MTLTexture> texChroma;

- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;

@end
