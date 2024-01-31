@interface SCNImageSource : NSObject

- (BOOL)isOpaque;
- (BOOL)isPremultiplied;
- (void)connectToProxy:(struct __C3DImageProxy { } *)a0;
- (id)textureSource;

@end
