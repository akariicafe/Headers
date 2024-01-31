@class MTLRenderPassDescriptor, NSArray, NSSet, NSString, PKMetalRenderLoop, PKTextureLoader, MPSUnaryImageKernel;
@protocol MTLBuffer, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface PKCategoryVisualizationCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol> {
    PKMetalRenderLoop *_renderLoop;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLRenderPassDescriptor *_secondRenderPassDescriptor;
    unsigned long long _drawableWidth;
    unsigned long long _drawableHeight;
    id<MTLCommandQueue> _commandQueue;
    PKTextureLoader *_overlayTextureLoader;
    PKTextureLoader *_overlayNormalTextureLoader;
    id<MTLTexture> _texture;
    id<MTLTexture> _overlayTexture;
    id<MTLTexture> _overlayNormalTexture;
    id<MTLRenderPipelineState> _overlayPipelineState;
    id<MTLRenderPipelineState> _circlePipelineState;
    id<MTLRenderPipelineState> _circleOutlinePipelineState;
    id<MTLBuffer> _vertexCoordsBuffer;
    id<MTLBuffer> _textureCoordsBuffer;
    id<MTLBuffer> _circleUniformsBuffer;
    id<MTLBuffer> _circleDataBuffer;
    id<MTLBuffer> _singleCircleDataBuffer;
    MPSUnaryImageKernel *_blurShader;
    BOOL _hasPendingUpdate;
    long long _pendingUpdateStyle;
    BOOL _invalidated;
    BOOL _effectivePaused;
    BOOL _effectiveMotionEnabled;
    BOOL _needsDraw;
    BOOL _emptying;
    struct { double startTime; unsigned long long bucketCount; double *magnitudeForBucket; void *colorForBucket; struct { struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix; struct { void /* unknown type, empty encoding */ columns[4]; } motionMatrix; void /* unknown type, empty encoding */ data; } uniforms; struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ velocity; float radius; float scale; float scaleTarget; float created; void /* unknown type, empty encoding */ color; struct { void /* unknown type, empty encoding */ columns[4]; } matrix; } singleCircle; unsigned long long circleCount; struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ velocity; float radius; float scale; float scaleTarget; float created; void /* unknown type, empty encoding */ color; struct { void /* unknown type, empty encoding */ columns[4]; } matrix; } circles[88]; unsigned long long categoryCount; void /* unknown type, empty encoding */ gravity; unsigned int framesToRender; BOOL isAnimating; } _state;
}

@property (copy, nonatomic) NSArray *bucketColors;
@property (readonly, copy, nonatomic) NSSet *magnitudes;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)renderLoop:(id)a0 didChangeEffectivePaused:(BOOL)a1;
- (void)renderLoop:(id)a0 drawAtTime:(double)a1;
- (void)renderWithTextures:(id)a0 rendererState:(id)a1;
- (id)rendererState;
- (void)setMagnitudes:(id)a0 withStyle:(long long)a1;
- (void)renderLoop:(id)a0 drawableSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)motionManager:(id)a0 didReceiveMotion:(id)a1;

@end
