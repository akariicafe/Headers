@protocol MTLTexture;

@interface PTTextureRGBA : PTTexture

@property (retain) id<MTLTexture> texRGBA;

- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;

@end
