@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLCommandQueue;

@interface PXGMetalRenderContext : NSObject

@property (retain, nonatomic) id<MTLComputePipelineState> textureCopyRegionKernelPipelineState;
@property (nonatomic) BOOL wantsUniformThreadgroups;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) BOOL supportsSharedTextures;
@property (readonly, nonatomic) BOOL wantsMutableSharedTextures;

+ (BOOL)deviceSupportsSharedTextures;
+ (id)privateContextWithDevice:(id)a0;
+ (id)privateContextWithDevice:(id)a0 commandQueue:(id)a1;
+ (id)sharedContextWithDevice:(id)a0 commandQueue:(id)a1;

- (id)newTextureWithDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1;
- (void)fastCopyBytes:(const void *)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 length:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (void).cxx_destruct;
- (void)copyBytes:(const void *)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 length:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (void)_createComputePipelinesIfNeeded;
- (void)encodeCopyKernelWithSourceTexture:(id)a0 targetTexture:(id)a1 sourceRegions:(id)a2 sourceRegionsOffset:(unsigned long long)a3 targetRegionSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 regionsCount:(unsigned long long)a5 computeEncoder:(id)a6;
- (id)newMipmappedTextureFromTexture:(id)a0;
- (void)_blitFromBuffer:(id)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 bytesPerRow:(unsigned long long)a3 offset:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (void)_blitFromTexture:(id)a0 toTexture:(id)a1 mipmapped:(BOOL)a2;
- (void)blitBuffer:(id)a0 toTexture:(id)a1 count:(unsigned long long)a2 blitEncoder:(id)a3;
- (void)blitTexture:(id)a0 toTexture:(id)a1 blitEncoder:(id)a2;

@end
