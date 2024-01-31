@protocol MTLTexture;

@interface NUCopyKernel : NUComputeKernel

@property (retain, nonatomic) id<MTLTexture> sourceTexture;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } sourceRegion;
@property (nonatomic) struct { unsigned long long x; unsigned long long y; unsigned long long z; } destinationOffset;

+ (void)copyFromTexture:(id)a0 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 toTexture:(id)a2 atPoint:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 withCommandBuffer:(id)a4;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 destinationTexture:(id)a1;

@end
