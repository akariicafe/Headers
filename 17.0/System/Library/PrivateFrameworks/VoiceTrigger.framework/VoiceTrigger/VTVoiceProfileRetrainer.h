@class NSString, VTAnalyzerNDAPI, NSObject, VTTextDependentSpeakerRecognizer;
@protocol OS_dispatch_semaphore;

@interface VTVoiceProfileRetrainer : NSObject <VTTextDependentSpeakerRecognizerDelegate> {
    double _retrainThresholdTrigger;
    double _retrainExplicitUttThresholdSAT;
    double _retrainExplicitUttThresholdTDSR;
    double _retrainThresholdSAT;
    double _retrainThresholdTDSR;
    double _retrainTDSRScore;
    unsigned long long _numRetentionUtterances;
}

@property (retain, nonatomic) VTAnalyzerNDAPI *analyzer;
@property (retain, nonatomic) NSString *languageCode;
@property (nonatomic) unsigned long long modelType;
@property (retain, nonatomic) NSString *configPath;
@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) VTTextDependentSpeakerRecognizer *satRetrainingTdSr;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *satRetrainingTdSrSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)textDependentSpeakerRecognizer:(id)a0 failedWithError:(id)a1;
- (void)textDependentSpeakerRecognizer:(id)a0 hasSatScore:(float)a1;
- (void).cxx_destruct;
- (id)_analyzeEnrollmentUtts:(id)a0 thresholdTrigger:(double)a1 thresholdSAT:(double)a2 thresholdTDSR:(double)a3 isUpdatingModel:(BOOL)a4 extraUtts:(id *)a5 discardUtts:(id *)a6 psrTimeout:(BOOL *)a7;
- (double)_computeSamplingMSEForUtts:(id)a0 withBeforeScores:(id)a1;
- (unsigned long long)_deleteUtterances:(id)a0;
- (id)_getLastPruningCookie;
- (BOOL)_updatePruningCookie:(id)a0;
- (id)initWithAnalyzer:(id)a0 languageCode:(id)a1 modelType:(unsigned long long)a2 configPath:(id)a3 resourcePath:(id)a4;
- (BOOL)pruneVoiceProfileIfNecessary;
- (void)retrainSATModelWithCompletion:(id /* block */)a0;

@end
