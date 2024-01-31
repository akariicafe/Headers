@class NSArray, NSString;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineCreateLinearSystem : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _computePipelineStates[8];
    struct { unsigned int polynomialCount; unsigned int systemSize; void /* unknown type, empty encoding */ spotlightCount; float extLambda; float tikLambdaConstant; float tikLambdaLinear; float tikLambdaQuadratic; float modulationStrength; float modulationOffset; } _params;
}

@property (retain, nonatomic) id<MTLTexture> inputThumbnailTexture;
@property (nonatomic) BOOL inputIsLinear;
@property (retain, nonatomic) id<MTLTexture> targetThumbnailTexture;
@property (nonatomic) BOOL targetIsLinear;
@property (retain, nonatomic) id<MTLTexture> inputWeightPlanesTexture;
@property (retain, nonatomic) id<MTLBuffer> inputPolyExpandedInputBuffer;
@property (retain, nonatomic) id<MTLBuffer> inputPairExpandedWeightsBuffer;
@property (retain, nonatomic) id<MTLTexture> inputPolyExpandedTargetTexture;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureTopLeft;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureTopEdge;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureTopRight;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureLeftEdge;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureCentral;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureRightEdge;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureBottomLeft;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureBottomEdge;
@property (retain, nonatomic) id<MTLTexture> inputSpotlightTextureBottomRight;
@property (retain, nonatomic) id<MTLTexture> inputLearningModulationMaskTexture;
@property (retain, nonatomic) NSArray *inputLHSDiagSums;
@property (retain, nonatomic) NSArray *inputPriorFactorForLHS;
@property (retain, nonatomic) NSArray *inputPriorFactorForRHS;
@property (retain, nonatomic) NSArray *outputLHS;
@property (retain, nonatomic) NSArray *outputRHS;
@property (retain, nonatomic) NSArray *priorMatrix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
