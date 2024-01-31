@protocol MTLComputePipelineState;

@interface UniScaleImage : UniKernel {
    id<MTLComputePipelineState> _downsampleRGBA;
}

- (id)run:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)outputImage:(id)a0;
- (id)outputNameArray;
- (id)_identifyGPU:(id)a0;
- (int)_loadShaders:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extentForImage;
- (id)inputNameArray;

@end
