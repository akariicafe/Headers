@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMIGuidedFilter : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> _calculateCoefficientsPipelineState;
    id<MTLComputePipelineState> _filterCoefficientsPipelineState;
    id<MTLComputePipelineState> _applyCoefficientsPipelineState;
}

+ (BOOL)isSingleChannelTexture:(id)a0;

- (id)initWithOptionalCommandQueue:(id)a0 allocator:(id)a1;
- (void).cxx_destruct;
- (int)encodeToCommandBuffer:(id)a0 inputTexture:(id)a1 guideTexture:(id)a2 outputTexture:(id)a3 kernelRadius:(unsigned long long)a4 epsilon:(float)a5;

@end
