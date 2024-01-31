@class NSArray, NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLDevice;

@interface CMIStyleEngineSolveLinearSystem : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _checkStatusComputePipelineState;
}

@property (retain, nonatomic) NSArray *inputLHS;
@property (retain, nonatomic) NSArray *inputRHS;
@property (retain, nonatomic) NSArray *inputSolution;
@property (retain, nonatomic) NSArray *inputStatus;
@property (retain, nonatomic) id<MTLBuffer> outputStatus;
@property (retain, nonatomic) id<MTLBuffer> outputCoefficients;
@property (readonly, nonatomic) unsigned int lhsSize;
@property (readonly, nonatomic) unsigned int rhsSize;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithMetalContext:(id)a0 lhsSize:(unsigned int)a1 rhsSize:(unsigned int)a2 solverType:(unsigned long long)a3;

- (void).cxx_destruct;
- (int)_compileShaders:(id)a0;
- (int)enqueueToCommandBuffer:(id)a0;
- (id)initWithMetalContext:(id)a0 lhsSize:(unsigned int)a1 rhsSize:(unsigned int)a2;
- (int)solveLinearSystem:(id)a0;

@end
