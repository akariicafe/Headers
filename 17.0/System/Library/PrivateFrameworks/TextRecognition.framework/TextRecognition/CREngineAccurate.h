@class NSString, CRNeuralTextDetector, CRPerformanceStatistics, CRFormAnalyzer, NSDictionary, NSObject, CRTableStructureRecognizer, CRMultiModelTextRecognizer;
@protocol CRLineWrapping, MLComputeDeviceProtocol;

@interface CREngineAccurate : NSObject <CREngine>

@property (retain) CRNeuralTextDetector *ocrDetector;
@property (retain) CRMultiModelTextRecognizer *ocrRecognizer;
@property (retain) NSObject<CRLineWrapping> *lineWrapper;
@property (retain) CRTableStructureRecognizer *tableStructureRecognizer;
@property (retain) CRFormAnalyzer *formAnalyzer;
@property (retain) NSDictionary *options;
@property unsigned long long revision;
@property BOOL shouldCancel;
@property (retain) CRPerformanceStatistics *recognizerStats;
@property (retain) CRPerformanceStatistics *lineWrappingStats;
@property (retain) CRPerformanceStatistics *formAnalyzerStats;
@property (retain) CRPerformanceStatistics *tableStructureRecognitionStats;
@property (retain) id<MLComputeDeviceProtocol> requestedComputeDevice;
@property (readonly) CRPerformanceStatistics *detectorStats;
@property (readonly) CRPerformanceStatistics *postProcStats;
@property (readonly) CRPerformanceStatistics *detectorInferenceStats;
@property (readonly) CRPerformanceStatistics *recognizerInferenceStats;
@property (readonly) CRPerformanceStatistics *recognizerDecodingStats;
@property (readonly) CRPerformanceStatistics *textGroupingStats;
@property (readonly) CRPerformanceStatistics *orientationCorrectionStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (id)supportedComputeDevicesForRevision:(long long)a0;
+ (id)supportedLanguagesForRevision:(long long)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)cancel;
- (id)computeDevice;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)_blockFromGroup:(id)a0 engineResult:(id)a1 titleRegion:(id *)a2 canWrapToNextBlock:(BOOL)a3;
- (id)_detectorDebugDataForResult:(id)a0;
- (id)_documentOutputRegionResult:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)_loadFormAnalyzerIfNeededWithError:(id *)a0;
- (id)_titleRegionFromRegions:(id)a0;
- (id)documentForLineRegions:(id)a0 recognitionResult:(id)a1;
- (id)resultDocumentForDetectionResult:(id)a0 image:(id)a1 options:(id)a2 progressHandler:(id /* block */)a3 error:(id *)a4;
- (id)resultDocumentInImage:(id)a0 options:(id)a1 trackingSession:(id)a2 withProgressHandler:(id /* block */)a3 error:(id *)a4;
- (unsigned long long)subfeatureOutputType;
- (id)textDetectorResultsForImage:(id)a0 error:(id *)a1;
- (id)textDetectorResultsForImage:(id)a0 trackingSession:(id)a1 error:(id *)a2;
- (id)thresholdsForTextRegion:(id)a0 withLocale:(id)a1;
- (id)trackingResultOnSession:(id)a0 image:(id)a1 options:(id)a2 error:(id *)a3;

@end
