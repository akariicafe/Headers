@protocol MTLComputePipelineState;

@interface UniGuidedFilter : UniKernel

@property (retain, nonatomic) id<MTLComputePipelineState> combineRGBA;

- (id)init;
- (id)run:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)outputImage:(id)a0;
- (id)outputNameArray;
- (id)_combineRGB:(id)a0 weights:(id)a1 tmpRGBA:(id)a2 rgbWeight:(float)a3 buffer:(id)a4;
- (id)_disparityRefinementRGBAGuideKernel;
- (id)_identifyGPU:(id)a0;
- (id)inputNameArray;

@end
