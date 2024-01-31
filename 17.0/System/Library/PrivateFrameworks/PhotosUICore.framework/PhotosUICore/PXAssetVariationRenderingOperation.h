@class NSError, NSURL, UIImage, NSDictionary, PLLivePhotoEditSource, PICompositionController, NSProgress, AVVideoComposition, NSNumber, AVAsset;

@interface PXAssetVariationRenderingOperation : NSOperation

@property (readonly, nonatomic) long long variationType;
@property (readonly, nonatomic) PLLivePhotoEditSource *editSource;
@property (readonly, copy, nonatomic) NSDictionary *analysisResult;
@property (readonly, copy, nonatomic) PICompositionController *baseCompositionController;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) BOOL renderAllResources;
@property (copy, nonatomic) id /* block */ startHandler;
@property (readonly, nonatomic) NSURL *outputImageURL;
@property (readonly, nonatomic) UIImage *outputImage;
@property (readonly, nonatomic) NSURL *outputVideoURL;
@property (readonly, copy, nonatomic) PICompositionController *adjustedCompositionController;
@property (readonly, nonatomic) AVAsset *outputAVAsset;
@property (readonly, nonatomic) AVVideoComposition *outputVideoComposition;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *duration;

- (id)init;
- (void)main;
- (void)_timeout;
- (void).cxx_destruct;
- (void)cancel;
- (void)_incrementProgressWithStartDate:(id)a0;
- (id)initWithEditSource:(id)a0 variationType:(long long)a1 analysisResult:(id)a2 baseCompositionController:(id)a3 outputImageURL:(id)a4 outputVideoURL:(id)a5 targetSize:(struct CGSize { double x0; double x1; })a6 renderAllResources:(BOOL)a7;

@end
