@class NSObject, AVTRenderer, NSString, JFXAnimojiEffect, AVTAvatarStore, NSLock;
@protocol JFXAnimojiTrackingLossDelegate, OS_dispatch_queue;

@interface JFXAnimojiEffectRenderer : NSObject <PVCompositeDelegate, JFXSupportProtocol> {
    NSObject<OS_dispatch_queue> *_puppetLoadingQ;
    NSObject<OS_dispatch_queue> *_puppetRenderingQ;
    BOOL _logged_render_failed;
}

@property (retain, nonatomic) AVTRenderer *renderer;
@property (retain, nonatomic) AVTAvatarStore *avatarStore;
@property (retain, nonatomic) JFXAnimojiEffect *currentPuppet;
@property (readonly, nonatomic) NSLock *renderPassLock;
@property (retain, nonatomic) NSLock *rendererLock;
@property (nonatomic) struct __CVMetalTextureCache { } *metalTextureCache;
@property (nonatomic) struct CGSize { double width; double height; } workingSize;
@property (nonatomic) struct __CVPixelBufferPool { } *inputBufferPool;
@property (nonatomic) double systemTimeForAVTRenderer;
@property (nonatomic) struct __CVMetalTextureCache { } *metalDepthTextureCache;
@property (readonly, nonatomic) BOOL constrainHeadPose;
@property (nonatomic) BOOL asynchronouslyLoadNewPuppets;
@property (weak, nonatomic) id<JFXAnimojiTrackingLossDelegate> trackingLossDelegate;
@property (nonatomic) BOOL allowAntialiasing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;
+ (struct CGSize { double x0; double x1; })animojiBufferSizeWithImageSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1;
+ (void)setupAVTMetalShaderCache;

- (void)clear;
- (id)init;
- (void)dealloc;
- (void)flush;
- (void).cxx_destruct;
- (id)renderWithInputs:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 userContext:(id)a2 compositeContext:(id)a3;
- (double)JFX_focalLengthForFrame:(id)a0 workingSize:(struct CGSize { double x0; double x1; })a1 interfaceOrientation:(long long)a2;
- (id)JFX_blendShapesForRenderer:(id)a0;
- (struct __CVBuffer { } *)JFX_depthDataToTexture:(id)a0;
- (BOOL)JFX_getRenderer:(id *)a0 forAnimojiEffect:(id)a1 primeFrame:(id)a2 captureOrientation:(long long)a3 interfaceOrientation:(long long)a4 backgroundColor:(id)a5;
- (BOOL)JFX_inputBufferIsPortraitAspect:(struct CGSize { double x0; double x1; })a0;
- (void)asyncLoadNewPuppet:(id)a0 currentPuppet:(id)a1 captureOrientation:(long long)a2 interfaceOrientation:(long long)a3 primeFrame:(id)a4 backgroundColor:(id)a5;
- (void)clearRenderer_renderLocked;
- (id)createNewRendererForPuppet:(id)a0;
- (void)createTextureCaches;
- (BOOL)currentPuppetIsEqualTo:(id)a0;
- (id)initWithConstrainedHeadPose:(BOOL)a0;
- (struct __CVBuffer { } *)newPixelBufferRenderedFromARFrame:(id)a0 withEffect:(id)a1 depthData:(id)a2 captureOrientation:(long long)a3 interfaceOrientation:(long long)a4 preRecordedBlendShapes:(id)a5 backgroundColor:(id)a6;
- (id)preRecordedBlendShapesForFrame:(id)a0 captureOrientation:(long long)a1 interfaceOrientation:(long long)a2 backgroundColor:(id)a3;
- (void)renderAnimoji:(id)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frame:(id)a2 depthData:(id)a3 backgroundColor:(id)a4 completionBlock:(id /* block */)a5;
- (void)renderFrame:(id)a0 withEffect:(id)a1 depthData:(id)a2 captureOrientation:(long long)a3 interfaceOrientation:(long long)a4 preRecordedBlendShapes:(id)a5 backgroundColor:(id)a6 completionBlock:(id /* block */)a7;
- (id)renderWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 metadata:(id)a1;
- (BOOL)setupHeadPoseAndBlendShapesForFrame:(id)a0 forRenderer:(id)a1 captureOrientation:(long long)a2 interfaceOrientation:(long long)a3 isInitialSetup:(BOOL)a4;
- (void)setupInputBufferPoolForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)setupPoseForPreRecordedBlendShapes:(id)a0 forRenderer:(id)a1 captureOrientation:(long long)a2 interfaceOrientation:(long long)a3 withFrame:(id)a4;
- (void)updateCurrentRenderer:(id)a0 withPuppet:(id)a1;

@end
