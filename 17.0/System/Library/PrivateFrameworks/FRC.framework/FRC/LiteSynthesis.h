@class Forwarp, NSString, GPUSynthesis, NSObject, Backwarp;
@protocol MTLTexture, MTLBuffer, OS_dispatch_semaphore, MTLCommandQueue, MTLDeviceSPI;

@interface LiteSynthesis : NSObject <FRCSynthesis> {
    id<MTLDeviceSPI> _device;
    id<MTLCommandQueue> _commandQueue;
    Forwarp *_forwarp;
    Backwarp *_backwarp;
    GPUSynthesis *_synthesis;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    struct __CVBuffer { } *_flowPixelBuffer0;
    struct __CVBuffer { } *_flowPixelBuffer1;
    struct __CVBuffer { } *_selectMap;
    struct __CVBuffer { } *_alphaMap;
    struct __CVBuffer { } *_intermediaCVBuffer;
    struct __CVBuffer { } *_L1Loss0;
    struct __CVBuffer { } *_L1Loss1;
    struct __CVBuffer *_warpedForwardFeatures[2];
    id<MTLTexture> _alphaTexture;
    id<MTLTexture> _flowTexture0;
    id<MTLTexture> _flowTexture1;
    id<MTLTexture> _L1Texture0;
    id<MTLTexture> _L1Texture1;
    id<MTLTexture> _mapTexture;
    id<MTLTexture> _combinedWarpedTexture;
    id<MTLBuffer> _bestErrorBuffer[2];
    id<MTLBuffer> _warpOutputBuffer[2];
    id<MTLTexture> _warpedForwardTextures[2];
    id<MTLTexture> _normalizedFwarpTextures[2];
    struct { struct { float mvX; float mvY; int count; } globalMv; struct { float mvX; float mvY; int count; } averageMv; float timeScale; float meanRatio; } flowStats0;
    struct { struct { float mvX; float mvY; int count; } globalMv; struct { float mvX; float mvY; int count; } averageMv; float timeScale; float meanRatio; } flowStats1;
    struct __CVBuffer { } *_normalizedFirst;
    struct __CVBuffer { } *_normalizedSecond;
    struct __CVBuffer { } *_forwardFlow;
    struct __CVBuffer { } *_backwardFlow;
}

@property (nonatomic) long long usage;
@property (nonatomic) BOOL enableMemDump;
@property (nonatomic) BOOL textureFromCVPixelBuffer;
@property (nonatomic) BOOL framePipeline;
@property (nonatomic) BOOL temporalFiltering;
@property (nonatomic) BOOL linearSplatting;
@property (nonatomic) unsigned long long synthesisMode;
@property (nonatomic) int flowLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseResources;
- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (void)allocateResources;
- (void)releaseFeatures;
- (void)calcBackwarpLossFirst:(id)a0 second:(id)a1 commandBuffer:(id)a2 callback:(id /* block */)a3;
- (void)combineWarpedTexture:(id)a0 and:(id)a1 normalized0:(id)a2 normalized1:(id)a3 alpha:(id)a4 toOutput:(id)a5 mapTexture:(id)a6 callback:(id /* block */)a7;
- (void)createFeaturesFromFirstImage:(struct __CVBuffer { } *)a0 secondImage:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3;
- (BOOL)createModules;
- (BOOL)dumpMemoryAt:(float)a0 frameIndex:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 channels:(unsigned long long)a4;
- (void)forwardWarpForFlow:(int)a0 feature:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 warpedOutput:(id)a5 callback:(id /* block */)a6;
- (void)forwarpFirstTexture:(id)a0 SecondTexture:(id)a1 timeScale:(float)a2 needWait:(BOOL)a3;
- (void)generateBlendingMap:(id)a0 and:(id)a1 toAlpha:(id)a2 timeScale:(float)a3 normalized0:(id)a4 normalized1:(id)a5 callback:(id /* block */)a6;
- (void)liteSynthesisWithFlowForward:(struct __CVBuffer { } *)a0 flowBackward:(struct __CVBuffer { } *)a1 firstFeature:(id)a2 secondFeature:(id)a3 outputTexture:(id)a4 timeScale:(float)a5 frameIndex:(unsigned long long)a6;
- (void)postFilterFrom:(id)a0 mapTexture:(id)a1 toTexture:(id)a2 callback:(id /* block */)a3;
- (BOOL)switchUsageTo:(long long)a0;
- (struct __CVBuffer { } *)synthesizeFrameForTimeScale:(float)a0 frameIndex:(unsigned long long)a1;
- (struct __CVBuffer { } *)synthesizeFrameFromFirstImage:(struct __CVBuffer { } *)a0 secondImage:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3 timeScale:(float)a4 frameIndex:(unsigned long long)a5;
- (void)upScaleforwardFlow:(struct __CVBuffer { } *)a0 backwardFlow:(struct __CVBuffer { } *)a1 outputTexture:(id)a2 commandBuffer:(id)a3;

@end
