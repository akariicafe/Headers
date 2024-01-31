@class NSDictionary, NSData, CIImage, NSNumber;
@protocol MTLComputePipelineState;

@interface SDOFHighlightRecovery : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSNumber *inputIterations;
@property (retain) NSNumber *inputTileSize;
@property (retain) NSData *inputDynamicParams;
@property (retain) id<MTLComputePipelineState> inputScanKernel;
@property (retain) id<MTLComputePipelineState> inputDiffuseKernel;
@property (retain) id<MTLComputePipelineState> inputCopyBackKernel;
@property (retain) id<MTLComputePipelineState> inputCopyKernel;
@property (retain) NSDictionary *inputConstants;

- (void).cxx_destruct;
- (id)outputImage;

@end
