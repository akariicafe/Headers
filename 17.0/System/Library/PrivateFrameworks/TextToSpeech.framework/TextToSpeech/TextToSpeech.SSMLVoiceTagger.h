@interface TextToSpeech.SSMLVoiceTagger : NSObject {
    void /* unknown type, empty encoding */ defaultVoice;
    void /* unknown type, empty encoding */ currentVoice;
    void /* unknown type, empty encoding */ voiceForLanguage;
    void /* unknown type, empty encoding */ resolveVoice;
    void /* unknown type, empty encoding */ leafPiles;
    void /* unknown type, empty encoding */ voiceTagRanges;
}

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0 voiceForLanguage:(id /* block */)a1 resolveVoice:(id /* block */)a2;
- (id)tagSSML:(id)a0;

@end
