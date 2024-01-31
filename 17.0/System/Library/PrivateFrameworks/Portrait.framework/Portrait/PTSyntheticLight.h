@class PTUtil, PTMetalContext, NSString, PTSubjectRelighting, PTPersonSemanticsNetwork, PTEffectUtil, NSArray, PTFaceAttributesNetwork, PTMSRResize, NSObject;
@protocol MTLBuffer, MTLTexture, MTLComputePipelineState, OS_dispatch_queue;

@interface PTSyntheticLight : NSObject {
    id<MTLComputePipelineState> _lightEstimation;
    PTMetalContext *_mainMetalContext;
    PTMetalContext *_asyncMetalContext;
    PTPersonSemanticsNetwork *_personSemanticsNetwork;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> _skinMaskRGBA;
    struct PTSyntheticLightConfig { BOOL firstFrame; int framesSinceLightEstimate; int lightEstimateFrequency; float emaCoefficient; } _config;
    NSString *_description;
    PTSubjectRelighting *_subjectRelighting;
    NSArray *_faceObservations;
    PTFaceAttributesNetwork *_faceAttributesNetwork;
    BOOL _subjectRelightingRunning;
    NSObject<OS_dispatch_queue> *srlAsyncQueue;
    struct __CVBuffer { } *_rgbaPixelBufferCopy;
    id<MTLTexture> _rgbaTextureCopy;
    id<MTLTexture> _quarterSizeLumaCopy;
    id<MTLTexture> _quarterSizeChromaCopy;
    id<MTLBuffer> _lightEstimationBuffer;
    float _lastRelightStrength;
}

+ (void)disableAsynchronousWork;

- (void)reset;
- (void)dealloc;
- (id)faceObservations;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)lightEstimation;
- (id)debugTextures;
- (void)estimateLightIntensity:(id)a0 relightStrength:(float)a1;
- (void)estimateLightIntensityWithFaceRects:(void *)a0 inTex:(id)a1 numberOfFaceRects:(int)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 humanDetections:(id)a4;
- (id)initWithMetalContext:(id)a0 faceAttributesNetwork:(id)a1 effectUtil:(id)a2 util:(id)a3 msrColorPyramid:(id)a4 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5 prewarmOnly:(BOOL)a6 sharedResources:(id)a7;
- (void)interpolateLightIntensity:(float)a0;
- (id)srlV2CoeffsBuffer;
- (void)updateSubjectRelighting:(struct __CVBuffer { } *)a0 inLuma:(id)a1 inChroma:(id)a2 inFaceRects:(struct FaceRectsWrapper { void /* unknown type, empty encoding */ x0[4]; int x1; })a3 runOnAsyncCommandQueue:(BOOL)a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5;

@end
