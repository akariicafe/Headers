@class NSDictionary;
@protocol MTLComputePipelineState;

@interface UniHighlightRecovery : UniKernel

@property (retain) id<MTLComputePipelineState> hlrScanKernel;
@property (retain) id<MTLComputePipelineState> hlrDiffuseKernel;
@property (retain) id<MTLComputePipelineState> hlrCopyBackKernel;
@property (retain) id<MTLComputePipelineState> hlrCopyKernel;
@property (nonatomic) int hlrTileSize;
@property (retain) NSDictionary *hlrConstants;

+ (void)_setupMultiGPUSupport:(id)a0 constants:(id)a1;
+ (id)generateCIImage:(id)a0;
+ (id)processList:(id)a0 tileSize:(int)a1;
+ (BOOL)runHighlightRecoveryWithInputTexture:(id)a0 outputTexture:(id)a1 temporaryTexture:(id)a2 dynamicParams:(id)a3 iterations:(int)a4 tileSize:(int)a5 scanKernel:(id)a6 diffuseKernel:(id)a7 copyBackKernel:(id)a8 copyKernel:(id)a9 commandBuffer:(id)a10 constants:(id)a11 forCoreImage:(BOOL)a12;

- (id)init;
- (id)run:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)outputImage:(id)a0;
- (id)outputNameArray;
- (id)_identifyGPU:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1 constants:(id)a2;
- (id)inputNameArray;

@end
