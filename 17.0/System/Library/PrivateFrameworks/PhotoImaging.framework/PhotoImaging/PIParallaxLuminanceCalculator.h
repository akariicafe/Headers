@interface PIParallaxLuminanceCalculator : NSObject

- (id)_imageToAnalyzeForLayerStack:(id)a0 error:(out id *)a1;
- (id)calculateClockLuminanceValuesForLayerStack:(id)a0 style:(id)a1 renderer:(id)a2 error:(out id *)a3;
- (id)calculateLuminanceValuesForImage:(id)a0 renderer:(id)a1 error:(out id *)a2;

@end
