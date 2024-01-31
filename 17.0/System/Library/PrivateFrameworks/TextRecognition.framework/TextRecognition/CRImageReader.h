@class NSDictionary, NSArray, NSObject;
@protocol CREngine;

@interface CRImageReader : NSObject {
    NSArray *_outputObjectTypes;
}

@property (retain, nonatomic) NSDictionary *userOptions;
@property BOOL shouldCancel;
@property (retain, nonatomic) NSObject<CREngine> *engine;
@property (copy) NSArray *outputObjectTypes;

+ (id)defaultOptions;
+ (BOOL)preheatModelsForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)supportedComputeDevicesForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)supportedLanguagesForOptions:(id)a0 revision:(long long)a1 error:(id *)a2;
+ (id)errorWithErrorCode:(long long)a0;
+ (BOOL)languageIsThai:(id)a0;
+ (Class)_engineClassFromOptions:(id)a0 error:(id *)a1;
+ (id)_engineFromOptions:(id)a0 error:(id *)a1;
+ (id)_jsonStringFromOptions:(id)a0;
+ (unsigned long long)_typeForFeature:(id)a0 enginePreferredRegionType:(unsigned long long)a1;
+ (unsigned long long)defaultRevisionNumber;
+ (id)descriptionForErrorCode:(long long)a0;
+ (struct CGSize { double x0; double x1; })detectorImageSizeForOptions:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)languageIsChinese:(id)a0;
+ (BOOL)languageIsCyrillic:(id)a0;
+ (BOOL)languageIsJapanese:(id)a0;
+ (BOOL)languageIsKorean:(id)a0;
+ (BOOL)languageIsLatin:(id)a0;
+ (BOOL)languageIsVietnamese:(id)a0;
+ (id)languageSetFromOptionsDictionary:(id)a0;
+ (BOOL)languageSupportsFullWidthPunctuation:(id)a0;
+ (id)prioritizationForOptions:(id)a0;
+ (id)supportedChineseLanguages;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOptions:(id)a0;
- (id)computeDevice;
- (id)documentOutputRegionForImage:(id)a0 options:(id)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (id)documentOutputRegionForImage:(id)a0 options:(id)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 trackingSession:(id)a3 error:(id *)a4 withProgressHandler:(id /* block */)a5;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)recognizeDetectedBlocks:(id)a0 inImage:(id)a1 error:(id *)a2 withProgressHandler:(id /* block */)a3;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 error:(id *)a2;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })smallestImageSizeForTextWithRelativeHeight:(double)a0 originalImageSize:(struct CGSize { double x0; double x1; })a1;
- (id)recognizerStats;
- (id)confidenceThresholdProvider;
- (id)detectorInferenceStats;
- (id)detectorStats;
- (id)documentOutputRegionForImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2 withProgressHandler:(id /* block */)a3;
- (id)documentOutputRegionForTextFeatures:(id)a0 image:(id)a1;
- (id)formAnalyzerStats;
- (id)lineWrappingStats;
- (id)orientationCorrectionStats;
- (id)postProcStats;
- (BOOL)purgeCaches:(id)a0;
- (id)recognizerDecodingStats;
- (id)recognizerInferenceStats;
- (id)resultDocumentForImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 trackingSession:(id)a3 error:(id *)a4 withProgressHandler:(id /* block */)a5;
- (id)resultsForCRImage:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3 withProgressHandler:(id /* block */)a4;
- (id)resultsForPixelBuffer:(struct __CVBuffer { } *)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3;
- (id)tableStructureRecognitionStats;
- (id)textDetectorResultsForImage:(id)a0 error:(id *)a1;
- (id)textGroupingStats;

@end
