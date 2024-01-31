@class UIScreen, MPSUnaryImageKernel, MTKTextureLoader, UIImage;
@protocol SBUILegibilitySettings, MTLDevice, MTLCommandQueue;

@interface _SBUILegibilityMetalEngineConfiguration : NSObject {
    UIImage *_blurTemplateImage;
    unsigned long long _pixelFormat;
    struct CGColorSpace { } *_outputColorSpace;
    long long _algo;
}

@property (readonly, nonatomic) MPSUnaryImageKernel *blurKernel;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, weak, nonatomic) id<SBUILegibilitySettings> settings;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) MTKTextureLoader *textureLoader;
@property (readonly, nonatomic) double shadowRadius;
@property (readonly, nonatomic) double shadowScale;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long radius;

+ (id)buildDestinationTextureForDevice:(id)a0 size:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2 outOutputBytes:(void **)a3 outLength:(unsigned long long *)a4 outBytesPerRow:(unsigned long long *)a5;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_configureConvolutionKernel;
- (struct CGSize { double x0; double x1; })_metalTextureOutputSizeForInputSize:(struct CGSize { double x0; double x1; })a0;
- (id)_prepareImageForConvolution:(id)a0 settings:(id)a1;
- (id)_sourceTextureForImage:(id)a0 settings:(id)a1 outMetalOutputTextureSize:(struct CGSize { double x0; double x1; } *)a2;
- (id)drawImageForSize:(struct CGSize { double x0; double x1; })a0 drawBlock:(id /* block */)a1;
- (id)drawImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 drawBlock:(id /* block */)a2;
- (id)executeBlurForImage:(id)a0 settings:(id)a1;
- (id)initWithScreen:(id)a0 settings:(id)a1 algo:(long long)a2;
- (id)initWithScreen:(id)a0 settings:(id)a1 algo:(long long)a2 pixelFormat:(unsigned long long)a3;

@end
