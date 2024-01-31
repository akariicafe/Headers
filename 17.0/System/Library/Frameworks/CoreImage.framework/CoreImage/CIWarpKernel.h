@interface CIWarpKernel : CIKernel

@property (nonatomic) BOOL perservesAlpha;
@property (nonatomic) BOOL preservesRange;

+ (id)kernelWithString:(id)a0;

- (void)setCanReduceOutputChannels:(BOOL)a0;
- (BOOL)canReduceOutputChannels;
- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char *x2; char *x3; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int *x0; int *x1; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int *x0; } x2; } x4; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; BOOL x12; })a0 constants:(id)a1 constantTypes:(id)a2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 inputImage:(id)a2 arguments:(id)a3 options:(id)a4;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 inputImage:(id)a2 arguments:(id)a3;
- (id)generateGeneralKernelFromWarpKernel:(void *)a0 args:(struct SerialObjectPtrArray { int x0; int x1; int x2; void **x3; } *)a1;
- (id)makeGridImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nx:(int)a1 ny:(int)a2;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2 options:(id)a3;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roiCallback:(id /* block */)a1 arguments:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autogenerateROI:(void *)a0 args:(struct SerialObjectPtrArray { int x0; int x1; int x2; void **x3; } *)a1 arguments:(id)a2 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithString:(id)a0;
- (id)generateMainFromWarpKernel:(void *)a0 args:(struct SerialObjectPtrArray { int x0; int x1; int x2; void **x3; } *)a1;

@end
