@interface MPSUnaryImageKernel : MPSKernel {
    int _checkFlags;
    void /* function */ *_encode;
    void /* function */ *_encodeKernelDAG;
    void *_encodeData;
    void /* function */ *_getPreferredTileSize;
}

@property (nonatomic) struct { long long x; long long y; long long z; } offset;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } clipRect;
@property (nonatomic) unsigned long long edgeMode;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (struct MPSRegion { struct MPSOrigin { double x0; double x1; double x2; } x0; struct MPSSize { double x0; double x1; double x2; } x1; })sourceRegionForDestinationSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (id)debugDescription;
- (void)encodeToCommandBuffer:(id)a0 sourceTexture:(id)a1 destinationTexture:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;
- (BOOL)encodeToCommandBuffer:(id)a0 inPlaceTexture:(id *)a1 fallbackCopyAllocator:(id /* block */)a2;
- (void)encodeToCommandBuffer:(id)a0 sources:(id)a1 destination:(id)a2 kernelDAGObject:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceImage:(id)a2 destinationImage:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceTexture:(id)a2 destinationTexture:(id)a3;
- (void)encodeToCommandEncoder:(id)a0 commandBuffer:(id)a1 sources:(id)a2 destination:(id)a3 kernelDAGObject:(id)a4;

@end
