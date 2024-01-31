@interface PXGExposureBlurKernel : PXGKernel

@property (nonatomic) double radius;
@property (nonatomic) double exposure;

+ (id)_exposurePipelineStateForDevice:(id)a0;

- (void)_encodeExposure:(float)a0 texture:(id)a1 toCommandBuffer:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 targetScale:(double)a3;
- (void)preloadWithDevice:(id)a0;

@end
