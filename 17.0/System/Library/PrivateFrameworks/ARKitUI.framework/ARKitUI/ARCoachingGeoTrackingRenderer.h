@class ARCoachingBasicSpring, NSString, ARCoachingStateSpring, ARCoachingDeviceController, NSObject, NSMutableArray, CAMetalLayer, ARCoachingGlyphState, ARCoachingAnimTime;
@protocol MTLBuffer, MTLDevice, MTLDepthStencilState, MTLTexture, OS_dispatch_queue, MTLRenderPipelineState;

@interface ARCoachingGeoTrackingRenderer : NSObject <ARCoachingRenderer> {
    id<MTLDevice> _device;
    unsigned long long _pixelFormat;
    ARCoachingGlyphState *_state;
    CAMetalLayer *_layer;
    ARCoachingAnimTime *_time;
    ARCoachingStateSpring *_cubeResolveSpring;
    ARCoachingStateSpring *_verticalResolvingSpring;
    ARCoachingBasicSpring *_orientationSpring;
    ARCoachingDeviceController *_deviceController;
    NSObject<OS_dispatch_queue> *_queue;
    id<MTLDepthStencilState> _depthState;
    id<MTLRenderPipelineState> _inflatedHullPipeline;
    id<MTLRenderPipelineState> _blockColorPipeline;
    id<MTLBuffer> _contentVertexPositions;
    id<MTLBuffer> _contentVertexGenerics;
    NSMutableArray *_contentIndexBuffers;
    struct { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    struct { void /* unknown type, empty encoding */ columns[4]; } _contentCameraMVPMatrix;
    float _ftime;
    id<MTLTexture> _depthTexture;
}

@property (readonly, nonatomic) double currentAnimationTime;
@property (readonly, nonatomic) ARCoachingGlyphState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void)resizeIfNeeded:(id)a0;
- (void)drawBuildingOutlineWithTimeDelta:(double)a0 drawable:(id)a1 commandBuffer:(id)a2;
- (void)drawDeviceWithTimeDelta:(double)a0 drawable:(id)a1 commandBuffer:(id)a2;
- (void)drawWithTimeDelta:(double)a0 drawable:(id)a1 commandBuffer:(id)a2;
- (id)initWithLayer:(id)a0 device:(id)a1 pixelFormat:(unsigned long long)a2 sampleCount:(int)a3 deviceMaskImage:(id)a4;
- (BOOL)loadOutlineModelWith:(id *)a0;
- (void)resetAnimationTime:(double)a0;
- (void)setOrientationAngle:(float)a0;
- (void)updateFrameStateWithTimeDelta:(double)a0;

@end
