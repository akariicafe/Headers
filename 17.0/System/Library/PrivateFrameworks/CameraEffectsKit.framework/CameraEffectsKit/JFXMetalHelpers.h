@protocol MTLDevice;

@interface JFXMetalHelpers : NSObject {
    id<MTLDevice> m_device;
}

+ (id)copyMetalLibraryWithDevice:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)createCVTextureFromImage:(struct __CVBuffer { } *)a0 withTextureCache:(struct __CVMetalTextureCache { } *)a1;
+ (unsigned long long)metalPixelFormatForImage:(struct __CVBuffer { } *)a0;

- (id)device;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)newPipelineStateForFunctionWithName:(id)a0;
- (id)newTexture:(id)a0;
- (id)newTextureWithSameSizeAs:(id)a0 pixelFormat:(unsigned long long)a1;
- (id)newTextureWithWidth:(unsigned int)a0 height:(unsigned int)a1 pixelFormat:(unsigned long long)a2 usage:(unsigned long long)a3;
- (BOOL)runComputeEncoder:(id)a0 pipelineState:(id)a1 referenceTexture:(id)a2;

@end
