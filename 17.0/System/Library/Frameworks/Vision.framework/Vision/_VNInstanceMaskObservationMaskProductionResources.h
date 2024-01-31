@class VNMetalContext, BGRBilinearUpsampler, NSObject;
@protocol MTLComputePipelineState, OS_dispatch_semaphore;

@interface _VNInstanceMaskObservationMaskProductionResources : NSObject

@property (readonly) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (readonly) VNMetalContext *metalContext;
@property (readonly) BGRBilinearUpsampler *bilinearUpsampler;
@property (readonly) id<MTLComputePipelineState> applyMaskComputeState;
@property (readonly) id<MTLComputePipelineState> cropCopyingComputeState;

- (void)dealloc;
- (void).cxx_destruct;

@end
