@class PTMetalContext, NSArray, _TtC3VFX9VFXEffect, _TtC3VFX11VFXRenderer, PTEffectReactionBackgroundDimming, PTColorConversion, _TtC3VFX9VFXCamera, NSMutableDictionary, MTLRenderPassDescriptor;
@protocol MTLTexture, _TtP3VFX10VFXBinding_, MTLComputePipelineState;

@interface PTVFXRenderEffect : NSObject {
    PTMetalContext *_metalContext;
    PTColorConversion *_colorConversion;
    PTEffectReactionBackgroundDimming *_reactionBackground;
    _TtC3VFX9VFXEffect *_lighting;
    id<_TtP3VFX10VFXBinding_> _lightBinding;
    id<MTLTexture> _softAlphaMask;
    float _dimmingFactor;
    BOOL _simulationWasSkippedForPreviousFrame;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _colorSize;
    _TtC3VFX11VFXRenderer *_vfxRenderer;
    _TtC3VFX9VFXCamera *_camera;
    unsigned int _cameraRotationDegrees;
    unsigned long long _aspectRatio;
    struct { void /* unknown type, empty encoding */ columns[4]; } _inverseCameraProjection;
    float _emitZValue;
    BOOL _emitNewReaction;
    NSMutableDictionary *_effectBindings;
    NSMutableDictionary *_activeReactions;
    id<MTLComputePipelineState> _convertRGB[9];
}

@property (retain) NSArray *reactionTemplates;
@property (readonly) unsigned long long depthOutputPixelFormat;
@property (readonly) unsigned long long rgbaOutputPixelFormat;
@property void /* unknown type, empty encoding */ depthNearFar;
@property BOOL reverseZ;

+ (void)setRandomizationSeed:(int)a0;

- (void).cxx_destruct;
- (float)dimmingFactor;
- (id)activeReactions;
- (BOOL)emitNewReaction;
- (id)addNewEffectFromEvent:(id)a0 time:(double)a1 bilbyFloatingMode:(BOOL)a2;
- (BOOL)computeSoftAlphaMask;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 inAlphaMask:(id)a2 outRGBA:(id)a3 colorTransferFunction:(int)a4;
- (int)initVFX:(BOOL)a0 asyncInitQueue:(id)a1;
- (id)initWithMetalContext:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 colorConversion:(id)a2 prewarmOnly:(BOOL)a3 softAlphaMask:(id)a4 asyncInitQueue:(id)a5;
- (int)maxReactionEffectComplexity;
- (void)removeEffectBindingWithKey:(id)a0;
- (int)render:(id)a0 effectRGBA:(id)a1 effectDepth:(id)a2;
- (int)renderWithBackgroundDimmingWithColorBuffer:(id)a0 colorBuffer:(struct __CVBuffer { } *)a1 effectRGBA:(id)a2 inCenteredDisparity:(id)a3 inAlphaMask:(id)a4 effectDepth:(id)a5;
- (void)setupCommonVFXSceneLoadOptions:(id)a0 metalLibraryURL:(id)a1;
- (void)updateCameraProjection:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)updateWithTime:(double)a0 lastFrameTime:(double)a1 reactions:(id)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 bilbyFloatingMode:(BOOL)a4;
- (BOOL)useSoftAlphaMask:(unsigned long long)a0;

@end
