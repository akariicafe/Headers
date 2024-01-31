@class NSArray, NSString, CRImageReaderTrackingSession, VNDetectBarcodesRequest;

@interface VNRecognizeDocumentsRequest : VNStatefulRequest <VNRequestProgressProviding, VNDocumentObservationsAccepting> {
    CRImageReaderTrackingSession *_trackingSession;
}

@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (copy, nonatomic) NSArray *customWords;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) BOOL usesLanguageDetection;
@property (nonatomic) BOOL usesAlternateLineGrouping;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic) BOOL detectionOnly;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (nonatomic) BOOL usesFormFieldDetection;
@property (retain, nonatomic) VNDetectBarcodesRequest *barcodeRequest;
@property (readonly, copy) NSArray *results;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly) BOOL indeterminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *inputTextBlocks;

+ (Class)configurationClass;
+ (id)supportedRecognitionLanguagesForTextRecognitionLevel:(long long)a0 revision:(unsigned long long)a1 error:(id *)a2;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)sequencedRequestPreviousObservationsKey;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (unsigned long long)_CRImageReaderRevisionForRevision:(unsigned long long)a0;
- (BOOL)hasCancellationHook;
- (id)initWithFrameAnalysisSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackingLevelBlockType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)supportedRecognitionLanguagesAndReturnError:(id *)a0;

@end
