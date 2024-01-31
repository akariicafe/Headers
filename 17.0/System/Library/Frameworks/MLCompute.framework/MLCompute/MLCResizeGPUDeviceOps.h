@interface MLCResizeGPUDeviceOps : MLCGPUDeviceOps

@property (nonatomic) float scaleFactorX;
@property (nonatomic) float scaleFactorY;
@property (nonatomic) BOOL alignCorners;
@property (nonatomic) BOOL isSpecialCasedNearestForwardKernel;

+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;

- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
