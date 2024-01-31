@class CRFormDetectorModel, CRFormAnalyzerConfiguration;

@interface CRFormDetector : NSObject

@property (readonly) CRFormAnalyzerConfiguration *configuration;
@property (readonly) CRFormDetectorModel *model;

+ (id)_detectorResultsFromSortedResults:(const void *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 originalImageSize:(struct CGSize { double x0; double x1; })a2;
+ (id)_multiArrayFromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (void)_saveDebugImage:(id)a0 byOverlayingResults:(const void *)a1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)_denormalizeResults:(void *)a0 imageSize:(struct CGSize { double x0; double x1; } *)a1 translation:(struct CGVector { double x0; double x1; } *)a2;
- (id)detectFormFieldsInImage:(id)a0 outputCandidateResults:(id *)a1;

@end
