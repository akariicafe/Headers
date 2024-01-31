@class PTMetalContext, MTLRenderPassDescriptor, MTLSharedEventListener, PTColorConversion, NSObject;
@protocol MTLRenderPipelineState, MTLSharedEvent, MTLTexture, MTLBuffer, OS_dispatch_semaphore;

@interface PTApplyHomographies : NSObject {
    PTMetalContext *_metalContext;
    id<MTLSharedEvent> _sharedEvent;
    MTLSharedEventListener *_sharedEventListener;
    PTColorConversion *_colorConversion;
    id<MTLTexture> _rgbaLinear;
    id<MTLTexture> _rgbaLinearVIS;
    id<MTLTexture> _disparityVIS;
    id<MTLTexture> _textureMarker;
    id<MTLBuffer> _vertexBufferHomography[2];
    id<MTLBuffer> _indexBufferHomography;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    unsigned int _frameCounter;
    unsigned long long _vertexCountHomography;
    unsigned long long _indexCountHomography;
    int _numberOfColsOverscan;
    int _numberOfRowsOverscan;
    void /* unknown type, empty encoding */ _inputColorSize;
    BOOL _showGrid;
    BOOL _showVirtualCrop;
    id<MTLRenderPipelineState> _renderPipelineState;
    id<MTLRenderPipelineState> _renderPipelineStateDisparity;
    MTLRenderPassDescriptor *_homographyRenderPassDescriptor;
}

- (void).cxx_destruct;
- (void)_ensureSufficientBufferSizesNumberOfRows:(int)a0 numberOfCols:(int)a1;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 disparitySize:(struct CGSize { double x0; double x1; })a2;
- (id)updateDisparity:(id)a0 inDisparity:(id)a1;
- (id)updatePTTexture:(id)a0 inPTTexture:(id)a1;

@end
