@protocol MTLDevice;

@interface NUComputeKernel : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;

+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })gridSizeForThreadGroupSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 imageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })groupSizeForImageSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 pipelineState:(id)a1;
+ (id)pipelineStateForFunctionWithName:(id)a0 device:(id)a1 error:(out id *)a2;
+ (id)pipelineStateForFunctionWithName:(id)a0 constants:(id)a1 key:(id)a2 device:(id)a3 error:(out id *)a4;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 destinationTexture:(id)a1;

@end
