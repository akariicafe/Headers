@protocol MTLTexture;

@interface EspressoBrickTensorMetal : EspressoBrickTensor

@property (retain) id<MTLTexture> texture;

- (void).cxx_destruct;

@end
