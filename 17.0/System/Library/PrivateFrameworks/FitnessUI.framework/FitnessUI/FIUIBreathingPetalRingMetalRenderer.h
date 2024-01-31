@class NSString, MTKView;
@protocol MTLRenderPipelineState, MTLDevice, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface FIUIBreathingPetalRingMetalRenderer : NSObject <MTKViewDelegate> {
    MTKView *_mtkView;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    struct { int numberOfPetals; int showBlurTrails; void /* unknown type, empty encoding */ circlePosition[20]; void /* unknown type, empty encoding */ circleProperties[20]; void /* unknown type, empty encoding */ textureRotationVector; } _uniforms;
    struct { void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ coordinate; } _vertexData[25];
    struct { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    id<MTLBuffer> _indexBuffer;
    id<MTLTexture> _circleGradient;
    id<MTLRenderPipelineState> _renderPipeline;
    void /* unknown type, empty encoding */ _ringCenterVector;
    long long _petalColor;
    long long _numberOfPetals;
    BOOL _showBlurTrails;
}

@property (nonatomic) float ringRadius;
@property (nonatomic) struct CGPoint { double x; double y; } ringCenter;
@property (readonly, nonatomic) long long numberOfVisiblePetals;
@property (nonatomic) struct { void /* unknown type, empty encoding */ circlePosition[20]; void /* unknown type, empty encoding */ circleProperties[20]; void /* unknown type, empty encoding */ textureRotationVector; } circleProperties;
@property (copy, nonatomic) id /* block */ stateUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (void).cxx_destruct;
- (void)_updateVertices;
- (void)_clearCirclesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_createBuffers;
- (void)_loadTextures;
- (double)_maxPetalRingRadius;
- (void)_setCircleAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 blurriness:(float)a3 alpha:(float)a4;
- (void)_setupIndexes;
- (void)_setupProjectionMatrixForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setupRenderPipeline;
- (void)_setupVertices;
- (void)importDataFromPetalRingMetalRenderer:(id)a0;
- (id)initWithMetalKitView:(id)a0 petalColor:(long long)a1 numberOfPetals:(long long)a2 showBlurTrails:(BOOL)a3;
- (void)setBlurTrailAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 blurriness:(float)a3 alpha:(float)a4;
- (void)setGradientRotationAngle:(float)a0;
- (void)setNumberOfVisiblePetals:(long long)a0 showBlurTrails:(BOOL)a1;
- (void)setPetalAtIndex:(long long)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(float)a2 alpha:(float)a3;

@end
