@interface Speech.ObjCSpeechAnalyzer : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ normalizedTranscriber;
    void /* unknown type, empty encoding */ normalizedCommandRecognizer;
    void /* unknown type, empty encoding */ contextualizedTranscriber;
    void /* unknown type, empty encoding */ contextualizedCommandRecognizer;
    void /* unknown type, empty encoding */ endpointDetector;
    void /* unknown type, empty encoding */ speechAnalyzer;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ inputSequence;

+ (id)modelDownloadRequestForClientIdentifier:(id)a0 transcriberOptions:(id)a1;

- (id)init;
- (void)resumeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getContextWithCompletion:(id /* block */)a0;
- (void)finalizeWithThrough:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)cancelPendingResultsAndPauseWithCompletion:(id /* block */)a0;
- (void)finalizeAndFinishThroughEndOfInputWithCompletion:(id /* block */)a0;
- (void)finalizeAndFinishWithThrough:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)getModelInfoLanguageWithCompletion:(id /* block */)a0;
- (void)getModelInfoTasksWithCompletion:(id /* block */)a0;
- (void)getNextBufferStartTimeWithCompletion:(id /* block */)a0;
- (void)getRecognitionStatisticsWithCompletion:(id /* block */)a0;
- (void)getRecognitionUtterenceStatisticsWithCompletion:(id /* block */)a0;
- (id)initWithObjCSpeechAnalyzer:(id)a0 clientIdentifier:(id)a1 inputSequence:(id)a2 audioFormat:(id)a3 transcriberResultDelegate:(id)a4 endpointingResultDelegate:(id)a5 queue:(id)a6 transcriberOptions:(id)a7 commandRecognizerOptions:(id)a8 options:(id)a9 restrictedLogging:(BOOL)a10 geoLMRegionID:(id)a11 contextualNamedEntities:(id)a12 didChangeVolatileRange:(id /* block */)a13;
- (void)prepareToAnalyzeWithReportingInto:(id)a0 completion:(id /* block */)a1;
- (void)requestResultAtEndpointTimes:(id)a0;
- (void)setDidChangeVolatileRange:(id /* block */)a0 completion:(id /* block */)a1;

@end
