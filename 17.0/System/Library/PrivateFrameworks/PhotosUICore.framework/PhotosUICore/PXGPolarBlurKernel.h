@interface PXGPolarBlurKernel : PXGKernel

@property (nonatomic) double scaleFactor;
@property (nonatomic) double rotationAngle;

- (id)init;
- (BOOL)_encodePolarBlur:(int)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 params:(const void *)a3 length:(unsigned long long)a4 commandBuffer:(id)a5;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2 targetScale:(double)a3;

@end
