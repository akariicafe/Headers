@class VCPImagePetsKeypointsAnalyzer;

@interface VCPPetsPoseImageRequest : VCPRequest {
    VCPImagePetsKeypointsAnalyzer *_analyzer;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)processImage:(struct __CVBuffer { } *)a0 withOptions:(id)a1 error:(id *)a2;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (unsigned int)preferredPixelFormat;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;
- (int)parseResults:(id)a0 observations:(id)a1;

@end
