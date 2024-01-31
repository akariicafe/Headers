@interface _TtCC6Speech32EARSpeechRecognitionResultStream8XPCProxy : NSObject <_SFXPCEARSpeechRecognitionResultStream> {
    void /* unknown type, empty encoding */ enqueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)speechRecognizerDidFinishRecognitionWithError:(id)a0;
- (void)speechRecognizerDidProcessAudioDuration:(double)a0;
- (void)speechRecognizerDidProduceEndpointFeaturesWithWordCount:(long long)a0 trailingSilenceDuration:(long long)a1 eosLikelihood:(double)a2 pauseCounts:(id)a3 silencePosterior:(double)a4 processedAudioDurationInMilliseconds:(long long)a5;
- (void)speechRecognizerDidProduceLoggablePackage:(id)a0;
- (void)speechRecognizerDidRecognizeFinalResultCandidatePackage:(id)a0;
- (void)speechRecognizerDidRecognizeFinalResultPackage:(id)a0;
- (void)speechRecognizerDidRecognizePartialResultNbest:(id)a0;

@end
