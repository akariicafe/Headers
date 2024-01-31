@interface TextToSpeechVoiceBankingUI.VoiceBankingAudioServiceViewModel : NSObject <AVSpeechSynthesizerDelegate, AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ voiceBankingSession;
    void /* unknown type, empty encoding */ _recordingResult;
    void /* unknown type, empty encoding */ audioService;
    void /* unknown type, empty encoding */ player;
    void /* unknown type, empty encoding */ speechRecognitionDelayTimer;
    void /* unknown type, empty encoding */ _synthesizer;
    void /* unknown type, empty encoding */ _isRecording;
    void /* unknown type, empty encoding */ _recordingState;
    void /* unknown type, empty encoding */ _inputSource;
    void /* unknown type, empty encoding */ _isInputAvailable;
    void /* unknown type, empty encoding */ _playingRecording;
    void /* unknown type, empty encoding */ _isRecordingRequestInFlight;
    void /* unknown type, empty encoding */ _operationError;
    void /* unknown type, empty encoding */ _audioButtonState;
    void /* unknown type, empty encoding */ _recordingMode;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;
- (void)applicationDidResign;

@end
