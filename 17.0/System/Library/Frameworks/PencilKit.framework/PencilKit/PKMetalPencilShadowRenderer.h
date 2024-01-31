@protocol MTLDevice, MTLLibrary, MTLTexture, MTLBuffer, MTLRenderPipelineState;

@interface PKMetalPencilShadowRenderer : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLTexture> _minBlurTexture;
    id<MTLTexture> _maxBlurTexture;
    id<MTLBuffer> _vertexBuffer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _vertexBufferBounds;
    unsigned long long _currentPixelFormat;
    id<MTLRenderPipelineState> _currentPipelineState;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderInto:(id)a0 commandBuffer:(id)a1 position:(struct CGPoint { double x0; double x1; })a2 azimuth:(double)a3 altitude:(double)a4 height:(double)a5 alpha:(double)a6 scale:(double)a7 clearFramebuffer:(BOOL)a8 grayscale:(double)a9;
- (void)setupWithTexture:(id)a0 minBlur:(double)a1 maxBlur:(double)a2;

@end
