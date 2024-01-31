@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTNormalEstimation : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _estimateNormalsFromDisparity;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (void)estimateNormalsFromDisparity:(id)a0 outNormal:(id)a1 sensorWidth:(float)a2 focalLength:(float)a3;
- (void)estimateNormalsFromDisparity:(id)a0 outNormal:(id)a1;

@end
