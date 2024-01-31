@class MTLRenderPassDescriptor, NSObject;
@protocol OS_dispatch_group, MTLDevice, OS_dispatch_semaphore, MTLBuffer, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface CRMetalPolygonRectifier : NSObject {
    id<MTLDevice> _device;
    int _ioColorSpace;
    unsigned long long _pixelFormat;
    id<MTLRenderPipelineState> _pipelineState;
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct CGSize { double width; double height; } _imageSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
    id<MTLTexture> _texture;
    NSObject<OS_dispatch_group> *_textureCreationGroup;
    id<MTLTexture> _renderDestination;
    void /* unknown type, empty encoding */ _viewportSize;
    id<MTLTexture> _managedBlitTexture;
    NSObject<OS_dispatch_semaphore> *_renderDestinationSem;
    id<MTLBuffer> _vertices;
    unsigned long long _numVertices;
}

- (void).cxx_destruct;
- (void)_createRenderTargetWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_createTextureForInputCRImage:(id)a0;
- (void)_setSourceImage:(id)a0;
- (id)imageByRectifyingPolygon:(id)a0 imageHeight:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 sourceImage:(id)a1;
- (id)initWithDevice:(id)a0 sourceImage:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)rectifyPolygonAsync:(id)a0 imageHeight:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
