@class SSRVoiceActivityDetector, NSDictionary, SSRSpeakerRecognitionContext, NSString, NSObject;
@protocol SSRSpeakerRecognizer, SSRSpeakerRecognitionOrchestratorDelegate, CSAudioFileWriter, OS_os_transaction, OS_dispatch_queue;

@interface SSRSpeakerRecognitionOrchestrator : NSObject <SSRSpeakerRecognizerDelegate, SSRVoiceActivityDetectorDelegate> {
    double _lastScoreReportTimeStamp;
    double _lastSegmentStartTime;
    unsigned long long _segmentCounter;
    unsigned long long _numSamplesAddedToSpeakerRecognizers;
    BOOL _endAudioCalled;
    BOOL _startPointReported;
}

@property (retain, nonatomic) SSRSpeakerRecognitionContext *context;
@property (weak, nonatomic) id<SSRSpeakerRecognitionOrchestratorDelegate> delegate;
@property (retain, nonatomic) id<CSAudioFileWriter> ssrUttLogger;
@property (nonatomic) unsigned long long myriadResult;
@property (retain, nonatomic) id<SSRSpeakerRecognizer> psrRecognizer;
@property (retain, nonatomic) id<SSRSpeakerRecognizer> satRecognizer;
@property (retain, nonatomic) SSRVoiceActivityDetector *vad;
@property (retain, nonatomic) NSDictionary *psrLastSpeakerInfo;
@property (retain, nonatomic) NSDictionary *satLastSpeakerInfo;
@property (retain, nonatomic) NSDictionary *combinedScores;
@property (retain, nonatomic) NSDictionary *psrFinalSpeakerInfo;
@property (retain, nonatomic) NSDictionary *satFinalSpeakerInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *debugUtteranceAudioFilePath;
@property (retain, nonatomic) NSString *debugUtteranceJsonFilePath;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSString *transDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endAudio;
- (id)initWithContext:(id)a0 withDelegate:(id)a1 error:(id *)a2;
- (id)resetWithContext:(id)a0;
- (void)processAudio:(id)a0 numSamples:(unsigned long long)a1;
- (void)SSRVoiceActivityDetector:(id)a0 didDetectEndPointAt:(unsigned long long)a1;
- (void)SSRVoiceActivityDetector:(id)a0 didDetectStartPointAt:(unsigned long long)a1;
- (void)updateDebugFilePathsForSegment:(unsigned long long)a0;
- (void)_logSpeakerIdProcessorScoreDelayWithScoreInfo:(id)a0 hasFinished:(BOOL)a1;
- (void)_resetWithContext:(id)a0;
- (id)getLatestVoiceRecognitionInfo;
- (id)orchestratorScoresWithPSRScores:(id)a0 withSATScores:(id)a1 withSegmentStartTime:(double)a2;
- (void)speakerRecognizer:(id)a0 hasSpeakerIdInfo:(id)a1;
- (void)speakerRecognizerFinishedProcessing:(id)a0 withFinalSpeakerIdInfo:(id)a1;

@end
