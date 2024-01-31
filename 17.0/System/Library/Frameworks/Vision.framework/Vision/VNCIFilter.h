@class CIImage, CIColorKernel;

@interface VNCIFilter : CIFilter {
    CIColorKernel *_kernel;
}

@property (retain, nonatomic) CIImage *inputImage;

- (void).cxx_destruct;
- (id)initWithKernelName:(id)a0;
- (id)initWithKernelName:(id)a0 inputParameters:(id)a1;

@end
