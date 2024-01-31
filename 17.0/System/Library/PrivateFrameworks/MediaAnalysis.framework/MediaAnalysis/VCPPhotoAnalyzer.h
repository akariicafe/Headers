@class NSMutableDictionary, NSDictionary, VCPAsset, PHAsset, NSURL;

@interface VCPPhotoAnalyzer : NSObject {
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    unsigned long long _irisAnalyses;
    NSDictionary *_phFaceResults;
    unsigned long long _phFaceFlags;
    VCPAsset *_asset;
    float _imageBlurTextureScore;
    float _preAnalysisSharpnessScore;
    BOOL _faceDominated;
    BOOL _requirePHFaceAnalysis;
    PHAsset *_phAsset;
    NSURL *_imageCaptionModel;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

@property (nonatomic) BOOL allowStreaming;
@property (readonly) long long status;

+ (id)resourceForAsset:(id)a0 withResources:(id)a1;
+ (id)analyzerWithVCPAsset:(id)a0 forAnalysisTypes:(unsigned long long)a1;
+ (BOOL)canAnalyzeUndegraded:(id)a0 withResources:(id)a1;
+ (BOOL)isLivePhotoKeyFrameEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_reportPetsAnalysisWithResults:(id)a0;
- (id)analyzeAsset:(id /* block */)a0 withOptions:(id)a1;
- (int)analyzeImage:(unsigned long long *)a0 performedAnalyses:(unsigned long long *)a1 cancel:(id /* block */)a2;
- (int)checkFaceDominant;
- (int)downscaleImage:(struct __CVBuffer { } *)a0 scaledImage:(struct __CVBuffer **)a1 majorDimension:(int)a2;
- (id)existingAnalysisForMovieAnalyzer;
- (id)initWithPHAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)initWithVCPAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (void)processExistingAnalyses:(id)a0;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)a0;

@end
