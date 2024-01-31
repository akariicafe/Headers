@interface TextToSpeechVoiceBankingSupport.TTSVBAudioService : NSObject {
    void /* unknown type, empty encoding */ audioQueue;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ audioSession;
    void /* unknown type, empty encoding */ audioPlayerNode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioEngine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playbackPlayer;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ audioIOQueue;
    void /* unknown type, empty encoding */ numberOfAudioMagnitudes;
    void /* unknown type, empty encoding */ speechRecognitionService;
    void /* unknown type, empty encoding */ cachedSoundEffects;
}

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
