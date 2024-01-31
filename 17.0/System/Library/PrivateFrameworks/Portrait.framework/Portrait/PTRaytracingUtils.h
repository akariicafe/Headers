@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTRaytracingUtils : NSObject {
    id<MTLComputePipelineState> _focusEdgeMask;
    id<MTLComputePipelineState> _disparityCenterAndClip;
    id<MTLComputePipelineState> _sobelEdgeDetector;
    id<MTLComputePipelineState> _edgeDilation;
    PTMetalContext *_metalContext;
}

+ (float)focalLength;
+ (id)computeRandomUChars:(id)a0 rayCount:(int)a1;
+ (struct PTFocusEdge { float x0; float x1; float x2; float x3; })createFocusEdge;
+ (float)frameWidth;
+ (struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })createFocusObject:(SEL)a0 anamorphicFactor:(id)a1 colorSize:(float)a2 circleOfConfusionReference:(float)a3 fNumberLimitWeight:(float)a4;
+ (void)computeUnitCirclePoints:(struct PTRandomDisk { struct half2 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; } x0[94]; int x1; void /* unknown type, blank encoding */ x2; } *)a0 numberOfPatternCircles:(int)a1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)detectDilatedEdges:(id)a0 inDisparity:(id)a1 tempEdges:(id)a2 outEdges:(id)a3 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a4 disparityDiffMinMax:(id)a5 edgeTolerance:(float)a6;
- (void)disparityCenterAndClip:(SEL)a0 inDisparity:(id)a1 outDisparity:(id)a2 centeringValue:(id)a3 clipMinMax:(float)a4;
- (void)focusEdgeMask:(id)a0 inDisparityDiff:(id)a1 focusEdge:(struct PTFocusEdge { float x0; float x1; float x2; float x3; })a2 outFocusEdgeMask:(id)a3;
- (int)sobelEdgeDetection:(id)a0 inImage:(id)a1 outEdges:(id)a2 edgeTolerance:(float)a3;

@end
