@class CIFilter;

@interface UniCIFilter : UniKernel

@property (retain, nonatomic) CIFilter *filter;

- (id)init;
- (id)run:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)outputImage:(id)a0;
- (id)outputNameArray;
- (id)inputImageArray;
- (id)inputNameArray;
- (id)outputImageArray;

@end
