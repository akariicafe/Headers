@class MTLRenderPassDescriptor, PKTextureLoader, PKMetalRenderLoop, PKPayLaterCardMagnitudes, NSMutableArray;
@protocol MTLRenderPipelineState, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface PKPayLaterCardRenderer : NSObject {
    BOOL _invalidated;
    PKPayLaterCardMagnitudes *_magnitudes;
    NSMutableArray *_instances;
    PKMetalRenderLoop *_loop;
    id<MTLCommandQueue> _commandQueue;
    id<MTLRenderPipelineState> _backgroundPipelineState;
    id<MTLRenderPipelineState> _overlayPipelineState;
    id<MTLRenderPipelineState> _instancePipelineState;
    unsigned long long _drawableWidth;
    unsigned long long _drawableHeight;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    PKTextureLoader *_overlayLoader;
    id<MTLBuffer> _vertices;
    id<MTLBuffer> _instanceVertexCoords;
    id<MTLBuffer> _uniform;
    id<MTLBuffer> _instanceUniforms;
    id<MTLTexture> _overlay;
    double _viewHalfWidthAtInstancePlane;
    double _viewHalfHeightAtInstancePlane;
    double _minSeparationAtInstancePlane;
    double _instancePlaneDepthScaleFactor;
    double _smoothedViewZoom;
    double _smoothedSpacing;
    double _smoothedWaveAmount;
    double _smoothedPresentedAmount;
    double _overlayAlpha;
    struct { void /* unknown type, empty encoding */ columns[4]; } _viewMatrix;
    struct { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    BOOL _presented;
    struct { void /* unknown type, empty encoding */ vector; } _rotation;
    struct { void /* unknown type, empty encoding */ vector; } _gravity;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
