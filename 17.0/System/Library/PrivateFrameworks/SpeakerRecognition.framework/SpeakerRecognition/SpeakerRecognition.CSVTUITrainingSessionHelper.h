@interface SpeakerRecognition.CSVTUITrainingSessionHelper : NSObject {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ keywordDetector;
    void /* unknown type, empty encoding */ trainingManagerHelper;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ voiceTriggerEventInfo;
    void /* unknown type, empty encoding */ sessionProcess;
    void /* unknown type, empty encoding */ sessionSuspended;
    void /* unknown type, empty encoding */ numSamplesFed;
    void /* unknown type, empty encoding */ bestTriggerSampleStart;
    void /* unknown type, empty encoding */ extraSamplesAtStart;
}

- (id)init;
- (void).cxx_destruct;
- (void)closeSession;
- (void)suspendTraining;
- (id)handleAudioInputPayloadWithData:(id)a0;
- (id)handleAudioInputWithData:(id)a0;
- (id)initWithLocale:(id)a0 keywordDetector:(id)a1 trainingManagerHelper:(id)a2 session:(id)a3;
- (void)resumeTraining;
- (BOOL)retrieveAndStoreUtteranceWithLocale:(id)a0;
- (void)startTraining;

@end
