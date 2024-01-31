@interface TextToSpeechVoiceBankingSupport.TTSVBSpeechRecognitionService : NSObject <SFSpeechRecognitionTaskDelegate> {
    void /* unknown type, empty encoding */ speechRecognizer;
    void /* unknown type, empty encoding */ recognitionRequest;
    void /* unknown type, empty encoding */ recognitionTask;
    void /* unknown type, empty encoding */ speechRecognitionQueue;
    void /* unknown type, empty encoding */ userFinishedSpeakingTimer;
    void /* unknown type, empty encoding */ detectedSpeechText;
    void /* unknown type, empty encoding */ isAssetDownloading;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ phrase;
    void /* unknown type, empty encoding */ recordingEnvironment;
    void /* unknown type, empty encoding */ finishedListening;
}

- (id)init;
- (void).cxx_destruct;
- (void)speechRecognitionTask:(id)a0 didFinishRecognition:(id)a1;
- (void)speechRecognitionTask:(id)a0 didFinishSuccessfully:(BOOL)a1;
- (void)speechRecognitionTask:(id)a0 didHypothesizeTranscription:(id)a1;

@end
