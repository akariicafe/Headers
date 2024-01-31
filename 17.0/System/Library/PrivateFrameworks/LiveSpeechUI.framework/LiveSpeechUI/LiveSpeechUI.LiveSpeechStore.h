@interface LiveSpeechUI.LiveSpeechStore : NSObject <AVSpeechSynthesizerDelegate> {
    void /* unknown type, empty encoding */ _favoritePhrases;
    void /* unknown type, empty encoding */ $__lazy_storage_$_callManager;
    void /* unknown type, empty encoding */ favoritePhraseObserverToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accessManager;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _isHUDVisible;
    void /* unknown type, empty encoding */ _speechState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_synth;
    void /* unknown type, empty encoding */ _currentSpeechContext;
    void /* unknown type, empty encoding */ _queuedText;
    void /* unknown type, empty encoding */ _inputMode;
}

- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didContinueSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didPauseSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
