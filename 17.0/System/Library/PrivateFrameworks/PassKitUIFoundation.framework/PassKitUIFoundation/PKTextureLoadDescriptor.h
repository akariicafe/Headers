@protocol MTLDevice;

@interface PKTextureLoadDescriptor : NSObject {
    unsigned long long _storageMode;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (nonatomic) BOOL premultiplyAlpha;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) int renderingIntent;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;
- (id)createLoaderForCGImage:(struct CGImage { } *)a0;
- (void)setColorSpace:(struct CGColorSpace { } *)a0 renderingIntent:(int)a1;

@end
