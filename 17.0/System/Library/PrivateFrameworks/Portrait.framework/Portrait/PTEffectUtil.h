@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTEffectUtil : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _updateFocusObject;
    id<MTLComputePipelineState> _effectSampleFaceRects;
    id<MTLComputePipelineState> _copySingleChannel;
    id<MTLComputePipelineState> _clear;
    id<MTLComputePipelineState> _updateDisparityWithScreenCaptureRect;
}

+ (unsigned long long)aspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (id)faceRectsForVision:(void *)a0 numberOfFaceRects:(int)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rotateNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 inverse:(BOOL)a2;
+ (void /* unknown type, empty encoding */)screenSpaceToCameraSpace:(SEL)a0 zValue:(float)a1 inverseProjection:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (void)clearTexture:(id)a0 outTex:(id)a1;
- (void)copySingleChannelInTex:(id)a0 outTex:(id)a1;
- (void)sampleFaceRectsWithMaxFaceRects:(int)a0 faceRects:(void *)a1 faceRectsState:(int *)a2 focusDisparityMax:(float)a3 inDisparity:(id)a4 outFaceDistanceArray:(id)a5;
- (void)updateDisparityWithScreenCaptureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inDisparity:(id)a1 outDisparity:(id)a2 focalLenIn35mmFilm:(float)a3 fNumber:(float)a4;
- (void)updateFocusObjectWithFaceRectCount:(int)a0 disparityFocusOffsetSDOF:(struct PTDisparityFocusOffset { float x0; float x1; })a1 disparityFocusOffsetReactions:(struct PTDisparityFocusOffset { float x0; float x1; })a2 disparityFocusOffsetStudioLight:(struct PTDisparityFocusOffset { float x0; float x1; })a3 exponentialMovingAverageSDOF:(float)a4 exponentialMovingAverageStudioLight:(float)a5 faceRectsState:(int *)a6 isFirstFrame:(BOOL)a7 emitNewReaction:(BOOL)a8 focusOnAll:(BOOL)a9 lastFocus:(id)a10 inFaceDisparityArray:(id)a11 outDisparityModifiers:(id)a12 outDisparityFocus:(id)a13 outStudioLightEffectModifier:(id)a14 outUseDisparityBufferForReactions:(id)a15;

@end
