@class ARMatteGenerator, AVTPresentationConfiguration, MTLRenderPassDescriptor, ARFrame, SCNTechnique;
@protocol AVTSceneRenderer, SCNTechniqueSupport, MTLTexture, MTLLibrary, MTLRenderPipelineState;

@interface AVTARMaskRenderer : NSObject {
    id<SCNTechniqueSupport, AVTSceneRenderer> _owner;
    BOOL _ownerIsView;
    BOOL _clearWithCamera;
    unsigned long long _antialiasingMode;
    AVTPresentationConfiguration *_presentationConfiguration;
    BOOL _writeID;
    BOOL _isFirstFrame;
    BOOL _debugMode;
    struct CGSize { double width; double height; } _renderSize;
    unsigned long long _pipelineKind;
    float _headZ;
    ARFrame *_arFrame;
    ARMatteGenerator *_matteGenerator;
    id<MTLTexture> _matteTexture;
    BOOL _depthDataIsMirrored;
    long long _interfaceOrientation;
    id<MTLLibrary> _library;
    unsigned long long _capturedDataWidth;
    unsigned long long _capturedDataHeight;
    id<MTLTexture> _lastCapturedDepth;
    id<MTLTexture> _rawMaskTexture[2];
    id<MTLTexture> _tmpMaskBlurTexture;
    id<MTLRenderPipelineState> _dbgCamDepthPipeline;
    id<MTLRenderPipelineState> _maskPipeline;
    id<MTLRenderPipelineState> _maskPipelineBlurXHigh;
    id<MTLRenderPipelineState> _maskPipelineBlurYHigh;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct __CVMetalTextureCache { } *_textureCache;
    SCNTechnique *_technique;
    id /* block */ _techniqueDidChangeHandler;
}

@property (retain, nonatomic) AVTPresentationConfiguration *presentationConfiguration;
@property (nonatomic) BOOL flipDepth;
@property (nonatomic) float depthSmoothingFactor;
@property (retain) id<MTLTexture> capturedDepth;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)render:(id)a0;
- (void)setup:(struct CGSize { double x0; double x1; })a0 context:(id)a1 colorPixelFormat:(unsigned long long)a2;
- (void)reloadTechnique;
- (void)_updateMaskParametersWithRootJointPivotPosition:(SEL)a0;
- (id)initWithOwner:(id)a0 presentationConfiguration:(id)a1 techniqueDidChangeHandler:(id /* block */)a2;
- (void)reloadDepthShaders;
- (void)setClearWithCamera:(BOOL)a0 antialiasingMode:(unsigned long long)a1;
- (void)updateMaskParametersAtTime:(double)a0;
- (void)updateMaskParametersWithRootJointNode:(id)a0;
- (void)updateMaskParametersWithRootJointNodes:(id)a0;
- (void)updateWithARFrame:(id)a0 fallBackDepthData:(id)a1 captureOrientation:(long long)a2 interfaceOrientation:(long long)a3 mirroredDepthData:(BOOL)a4;
- (void)updateWithDepthTexture:(id)a0 captureOrientation:(long long)a1 interfaceOrientation:(long long)a2 mirroredDepthData:(BOOL)a3;

@end
