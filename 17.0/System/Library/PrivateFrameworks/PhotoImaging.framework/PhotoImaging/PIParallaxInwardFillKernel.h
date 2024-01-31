@protocol MTLTexture;

@interface PIParallaxInwardFillKernel : NUComputeKernel

@property (retain, nonatomic) id<MTLTexture> sourceTexture;

+ (void)fillSourceTexture:(id)a0 intoDestinationTexture:(id)a1 withCommandBuffer:(id)a2;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 destinationTexture:(id)a1;

@end
