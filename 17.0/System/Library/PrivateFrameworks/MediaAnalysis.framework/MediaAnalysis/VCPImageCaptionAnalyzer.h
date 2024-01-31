@class NSURL;

@interface VCPImageCaptionAnalyzer : VCPImageAnalyzer {
    NSURL *_modelPath;
    struct CVNLPCaptionHandler { } *_captionHandlerRef;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithModelPath:(id)a0;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (id)initWithMobileAsset;

@end
