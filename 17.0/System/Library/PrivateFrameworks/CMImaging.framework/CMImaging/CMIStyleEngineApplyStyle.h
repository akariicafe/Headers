@class NSString;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineApplyStyle : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineStates[2];
}

@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (nonatomic) BOOL inputIsLinear;
@property (retain, nonatomic) id<MTLTexture> inputIntegratedCoefficientsTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (nonatomic) BOOL outputShouldBeLinear;
@property (retain, nonatomic) id<MTLTexture> inputThumbnailTexture;
@property (nonatomic) BOOL inputThumbnailIsLinear;
@property (retain, nonatomic) id<MTLTexture> targetThumbnailTexture;
@property (nonatomic) BOOL targetThumbnailIsLinear;
@property (retain, nonatomic) id<MTLTexture> residualTexture;
@property (retain, nonatomic) id<MTLBuffer> linearSystemStatus;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionToRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)_compileShaders:(id)a0;
- (struct CGVector { double x0; double x1; })_displacementFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
- (void /* unknown type, empty encoding */)_uint2FromCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)_uint2FromCGSize:(struct CGSize { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)_uint2FromCGVector:(struct CGVector { double x0; double x1; })a0;
- (int)enqueueToCommandBuffer:(id)a0;

@end
