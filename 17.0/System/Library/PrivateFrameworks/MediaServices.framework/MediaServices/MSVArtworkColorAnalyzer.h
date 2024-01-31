@interface MSVArtworkColorAnalyzer : NSObject

@property (retain, nonatomic) struct CGImage { } *sourceImage;
@property (nonatomic) struct CGSize { double width; double height; } preferredImageSize;
@property (nonatomic) long long algorithm;

+ (long long)algorithmWithMPColorAnalyzerAlgorithm:(long long)a0;

- (void).cxx_destruct;
- (id)analyze;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (id)initWithSourceImage:(struct CGImage { } *)a0 algorithm:(long long)a1 preferredImageSize:(struct CGSize { double x0; double x1; })a2;

@end
