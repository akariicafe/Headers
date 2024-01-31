@class CACProfanityNode;

@interface CACCommandRecognizerDictation : CACCommandRecognizer {
    CACProfanityNode *_rootProfanityNode;
    BOOL _suppressProfanity;
}

- (void).cxx_destruct;
- (struct __RXLanguageObject { } *)_adLibLanguageObjectFromLanguageModel:(struct __RXLanguageObject { } *)a0;
- (id)_attributedStringFromResult:(struct __RXLanguageObject { } *)a0;
- (void)_didBeginUtteranceWithID:(unsigned long long)a0;
- (void)dictationConnectionDidRecognizeAttributedString:(id)a0 isHypothesis:(BOOL)a1 utteranceID:(unsigned long long)a2;
- (void)handleDictation:(id)a0;
- (void)speechRecognizer:(id)a0 didBeginUtteranceWithID:(unsigned long long)a1;
- (void)speechRecognizer:(id)a0 didRecognizeRXResult:(struct __RXLanguageObject { } *)a1;

@end
