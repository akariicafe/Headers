@class TIWordSearch;

@interface TIKeyboardInputManager_th : TIKeyboardInputManager_zh_ja {
    TIWordSearch *_wordSearch;
}

+ (Class)wordSearchClass;

- (id)wordSeparator;
- (BOOL)usesRetrocorrection;
- (BOOL)shouldExtendPriorWord;
- (id)keyboardBehaviors;
- (void *)initImplementation;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)loadDictionaries;
- (void)candidateRejected:(id)a0;
- (void)registerLearning:(id)a0 fullCandidate:(id)a1 keyboardState:(id)a2 mode:(id)a3;
- (void)addInput:(id)a0 withContext:(id)a1;
- (BOOL)canTrimInputAtIndex:(unsigned int)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (void)dropInputPrefix:(unsigned int)a0;
- (BOOL)supportsLearning;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (id)trimmedInputStem;
- (BOOL)usesMarkedTextForInput;
- (id)validCharacterSetForAutocorrection;
- (struct USet { } *)validUSetForAutocorrection;
- (id)wordSearch;
- (void)setWordBoundary;
- (void)dropInputPrefix:(unsigned int)a0 commitToWordSearch:(BOOL)a1;
- (id)firstMecabraCandidateOccurranceFromLastAutocorrectionList;
- (BOOL)shouldAutocommitForInput:(id)a0;

@end
