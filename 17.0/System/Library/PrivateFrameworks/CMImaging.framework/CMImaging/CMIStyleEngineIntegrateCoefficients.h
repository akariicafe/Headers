@class NSString;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineIntegrateCoefficients : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _integrateComputePipelineState;
    void /* unknown type, empty encoding */ _spotlightCount;
}

@property (retain, nonatomic) id<MTLBuffer> inputCoefficientsBuffer;
@property (retain, nonatomic) id<MTLTexture> inputWeightPlanesTexture;
@property (retain, nonatomic) id<MTLTexture> outputIntegratedCoefficientsTexture;
@property (retain, nonatomic) id<MTLBuffer> linearSystemStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
