@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long algorithm;

+ (id)translateFromMLColorAnalysis:(id)a0;

- (void).cxx_destruct;
- (id)analyze;
- (id)_fallbackColorAnalysis;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (id)initWithImage:(id)a0 algorithm:(long long)a1;

@end
