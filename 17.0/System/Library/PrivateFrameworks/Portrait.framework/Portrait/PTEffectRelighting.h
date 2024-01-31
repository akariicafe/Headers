@class PTMetalContext, PTUtil, PTBrightSceneDetector, PTMSRResize, PTMTLDropHints, PTSyntheticLight, SingleColorCubeCorrectionStage;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTEffectRelighting : NSObject {
    id<MTLComputePipelineState> _studioLight;
    id<MTLComputePipelineState> _createLightMask;
    id<MTLComputePipelineState> _fgBgForDebug;
    id<MTLComputePipelineState> _lightMaskForDebug;
    id<MTLComputePipelineState> _relightFullsizeInput;
    id<MTLComputePipelineState> _lightMaskOutline;
    id<MTLComputePipelineState> _filterLightGainApplyToRGB;
    PTSyntheticLight *_syntheticLight;
    PTUtil *_util;
    PTMetalContext *_metalContext;
    struct RelightingParam { void /* unknown type, empty encoding */ bgLightIntensity; void /* unknown type, empty encoding */ bgVignetteLightIntensity; float bgVignetteFalloff; float fgOffsetFactorNear; float fgOffsetFactorFar; float bgEffectThresholdDisparityMin; float fgLightDesaturation; void /* unknown type, empty encoding */ fgLightColor; void /* unknown type, empty encoding */ bgToneCurveReciprocal; void /* unknown type, empty encoding */ highlightClippingMinMax; void /* unknown type, empty encoding */ highlightClippingVignetteMinMax; } _parameters;
    struct SmoothFaceRectData { float aspect; float lightMaskExponent; float preumbraBendFactor; float lightMaskWidth; float lightMaskFaceOffsetY; void /* unknown type, empty encoding */ faceEyeWeight; struct { void /* unknown type, empty encoding */ columns[2]; } rotation; struct SmoothFaceRect { void /* unknown type, empty encoding */ faceCenter; float faceRadius; void /* unknown type, empty encoding */ bodyPos; void /* unknown type, empty encoding */ bodySize; void /* unknown type, empty encoding */ leftEyeCenter; float leftEyeRadius; void /* unknown type, empty encoding */ rightEyeCenter; float rightEyeRadius; float preumbra; float weight; } faces[4]; } _smoothFaceRects;
    int _frameIndex;
    void /* unknown type, empty encoding */ _weightHeadEye;
    float _eyeRadiusFactor;
    id<MTLTexture> _lightMasks;
    void /* unknown type, empty encoding */ _bgVignetteLightIntensity;
    float _lightGainMapScale;
    id<MTLTexture> _lightGainMapLowRes;
    id<MTLTexture> _lightGainMapLowResFiltered;
    id<MTLTexture> _lightGainMapFiltered;
    PTBrightSceneDetector *_brightSceneDetector;
    float _lastFrameTimeSeconds;
    SingleColorCubeCorrectionStage *_colorCube;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> _quarterSizeRGBA;
    id<MTLTexture> _relightSizeRGBA;
    int _colorCubeType;
    PTMTLDropHints *_dropHints;
}

- (void)reset;
- (void).cxx_destruct;
- (id)colorCube;
- (id)gainMap;
- (void)studioLightInYUV:(id)a0 inNormal:(id)a1 inDisparity:(id)a2 inFocusDisparityModifier:(id)a3 outYUV:(id)a4 outRgbaPyramid:(id)a5 relightStrength:(float)a6 studioLightEffectModifier:(id)a7;
- (struct SmoothFaceRectData { float x0; float x1; float x2; float x3; float x4; struct { void /* unknown type, empty encoding */ x0[2]; } x5; struct SmoothFaceRect { float x0; float x1; float x2; float x3; float x4; } x6[4]; } *)smoothFaceRects;
- (void)updateColorCube;
- (id)brightSceneDetector;
- (void)computeSmoothFaceRect:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)estimateLightIntensity:(id)a0 inFaceRects:(void *)a1 numberOfFaceRects:(int)a2 humanDetections:(id)a3 effectRenderRequest:(id)a4;
- (void)fgBgDebugWithDisparity:(id)a0 inNormal:(id)a1 inFocusDisparityModifier:(id)a2 outMask:(id)a3 debugType:(long long)a4;
- (int)filterLightGainApplyInRGB:(id)a0 outRGB:(id)a1 filterLightGainMapLowres:(BOOL)a2;
- (void)initRelightingParam;
- (id)initWithMetalContext:(id)a0 faceAttributesNetwork:(id)a1 effectUtil:(id)a2 util:(id)a3 prewarmOnly:(BOOL)a4 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5 msrColorPyramid:(id)a6 sharedResources:(id)a7;
- (void)lightMaskDebugWithMSRPyramid:(id)a0 outFaceMask:(id)a1;
- (id)syntheticLight;
- (void)updateParamters:(id)a0 relightStrength:(float)a1;

@end
