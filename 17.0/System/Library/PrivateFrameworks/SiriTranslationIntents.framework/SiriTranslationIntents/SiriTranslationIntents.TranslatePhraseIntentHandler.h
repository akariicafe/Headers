@interface SiriTranslationIntents.TranslatePhraseIntentHandler : NSObject <TranslatePhraseIntentHandling> {
    void /* unknown type, empty encoding */ translationApiClient;
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ deviceState;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmTranslatePhrase:(id)a0 completion:(id /* block */)a1;
- (void)handleTranslatePhrase:(id)a0 completion:(id /* block */)a1;
- (void)resolvePhraseForTranslatePhrase:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveTargetLanguageForTranslatePhrase:(id)a0 withCompletion:(id /* block */)a1;

@end
