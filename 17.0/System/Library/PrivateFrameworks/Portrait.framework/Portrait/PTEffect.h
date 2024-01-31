@class PTMetalContext, PTFaceAttributesNetwork, PTEffectResources, PTEffectRenderer, PTEffectDescriptor, NSObject, PTHumanDetections;
@protocol OS_dispatch_queue;

@interface PTEffect : NSObject {
    PTEffectRenderer *_delegate;
    PTMetalContext *_metalContext;
    NSObject<OS_dispatch_queue> *_asyncInitQueue;
    BOOL _asynchronous;
    int _frameId;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    PTFaceAttributesNetwork *_faceAttributesNetwork;
    PTEffectResources *_resources;
    PTEffectDescriptor *_effectDescriptor;
    BOOL _asyncInitialization;
    BOOL _rebuildEffect;
    long long _debugType;
    PTHumanDetections *_humanDetections;
    double _lastFrameTime;
    double _lastDetectionUpdate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
}

@property long long effectQuality;

+ (int)prewarmForMediaserverd;
+ (int)prewarmWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(unsigned long long)a2 sharedResources:(id)a3;
+ (void)disableAsynchronousWork;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })personSegmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;

- (id)initWithDescriptor:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)setDebug:(long long)a0;
- (void).cxx_destruct;
- (int)setEffectType:(unsigned long long)a0;
- (int)render:(id)a0;
- (id)activeReactions;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 availableEffectTypes:(unsigned long long)a2 activeEffectType:(unsigned long long)a3 effectQuality:(long long)a4;
- (int)_setEffectType:(unsigned long long)a0;
- (void)_setEffectQuality:(long long)a0;
- (id)initWithDescriptor:(id)a0 sharedResources:(id)a1;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 availableEffectTypes:(unsigned long long)a2 activeEffectType:(unsigned long long)a3 prewarmOnly:(BOOL)a4 effectQuality:(long long)a5;
- (BOOL)isRenderRequiredForRequest:(id)a0;
- (void)keepOldDelegateAlive:(id)a0;
- (int)renderReaction:(id)a0 effectRenderRequest:(id)a1;
- (int)updateEffectDelegate:(BOOL)a0;
- (BOOL)validPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)validateRenderRequest:(id)a0 reactionOnly:(BOOL)a1;
- (int)waitForInitialization;

@end
