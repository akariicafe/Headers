@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {
    id /* block */ _resultHandler;
    BOOL _hasFiredFinalResult;
}

- (void)dictationConnection:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)dictationConnection:(id)a0 didRecognizeTokens:(id)a1 languageModel:(id)a2;
- (void).cxx_destruct;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)a0;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)a0;
- (void)dictationConnection:(id)a0 speechRecordingDidFail:(id)a1;
- (void)dictationConnection:(id)a0 didRecognizePackage:(id)a1;
- (id)_initWithRequest:(id)a0 queue:(id)a1 languageCode:(id)a2 taskHint:(long long)a3 resultHandler:(id /* block */)a4;
- (void)localSpeechRecognitionClient:(id)a0 didFinishRecognition:(id)a1;
- (void)localSpeechRecognitionClient:(id)a0 didProcessAudioDuration:(double)a1;
- (void)localSpeechRecognitionClient:(id)a0 didRecognizePartialResult:(id)a1 rawPartialResult:(id)a2;
- (void)localSpeechRecognitionClient:(id)a0 speechRecognitionDidFail:(id)a1;
- (void)localSpeechRecognitionClient:(id)a0 speechRecordingDidFail:(id)a1;
- (void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)a0;
- (void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)a0;

@end
