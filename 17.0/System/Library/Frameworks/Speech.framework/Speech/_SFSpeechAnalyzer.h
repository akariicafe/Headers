@class _SFInputSequencer, _TtC6Speech18ObjCSpeechAnalyzer;

@interface _SFSpeechAnalyzer : NSObject {
    _TtC6Speech18ObjCSpeechAnalyzer *_implementation;
}

@property (readonly) _SFInputSequencer *inputSequence;

+ (id)modelDownloadRequestForClientIdentifier:(id)a0 transcriberOptions:(id)a1;

- (void)resumeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getContextWithCompletion:(id /* block */)a0;
- (void)cancelPendingResultsAndPauseWithCompletion:(id /* block */)a0;
- (void)finalizeAndFinishThrough:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)finalizeAndFinishThroughEndOfInputWithCompletion:(id /* block */)a0;
- (void)finalizeAndFinishWithCompletion:(id /* block */)a0;
- (void)finalizeThrough:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (void)finalizeWithCompletion:(id /* block */)a0;
- (void)getModelInfoLanguageWithCompletion:(id /* block */)a0;
- (void)getModelInfoTasksWithCompletion:(id /* block */)a0;
- (void)getNextBufferStartTimeWithCompletion:(id /* block */)a0;
- (void)getRecognitionStatisticsWithCompletion:(id /* block */)a0;
- (void)getRecognitionUtterenceStatisticsWithCompletion:(id /* block */)a0;
- (id)initWithClientIdentifier:(id)a0 inputSequence:(id)a1 audioFormat:(id)a2 transcriberResultDelegate:(id)a3 endpointingResultDelegate:(id)a4 queue:(id)a5 transcriberOptions:(id)a6 commandRecognizerOptions:(id)a7 options:(id)a8 restrictedLogging:(BOOL)a9 geoLMRegionID:(id)a10 contextualNamedEntities:(id)a11 didChangeVolatileRange:(id /* block */)a12;
- (id)initWithClientIdentifier:(id)a0 inputSequence:(id)a1 audioFormat:(id)a2 transcriberResultDelegate:(id)a3 endpointingResultDelegate:(id)a4 queue:(id)a5 transcriberOptions:(id)a6 commandRecognizerOptions:(id)a7 options:(id)a8 restrictedLogging:(BOOL)a9 geoLMRegionID:(id)a10 contextualNamedEntities:(id)a11 personalizedLMPath:(id)a12 didChangeVolatileRange:(id /* block */)a13;
- (id)initWithClientIdentifier:(id)a0 inputSequence:(id)a1 audioFormat:(id)a2 transcriberResultDelegate:(id)a3 endpointingResultDelegate:(id)a4 queue:(id)a5 transcriberOptions:(id)a6 commandRecognizerOptions:(id)a7 options:(id)a8 restrictedLogging:(BOOL)a9 geoLMRegionID:(id)a10 personalizedLMPath:(id)a11 didChangeVolatileRange:(id /* block */)a12;
- (void)prepareToAnalyzeReportingInto:(id)a0 completion:(id /* block */)a1;
- (void)requestResultAtEndpointTimes:(id)a0;
- (void)setDidChangeVolatileRange:(id /* block */)a0 completion:(id /* block */)a1;

@end
