@interface TIKeyboardInputManagerFavonius_th : TIKeyboardInputManager

- (id)wordSeparator;
- (BOOL)shouldExtendPriorWord;
- (id)keyboardBehaviors;
- (void *)initImplementation;
- (void)loadDictionaries;
- (void)candidateRejected:(id)a0;
- (void)registerLearning:(id)a0 fullCandidate:(id)a1 keyboardState:(id)a2 mode:(id)a3;
- (void)registerLearningForCompletion:(id)a0 fullCompletion:(id)a1 context:(id)a2 prefix:(id)a3 mode:(id)a4;
- (void)addInput:(id)a0 withContext:(id)a1;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (BOOL)supportsLearning;
- (void)textAccepted:(id)a0 fromPredictiveInputBar:(BOOL)a1 withInput:(id)a2;
- (id)trimmedInputStem;
- (void)setWordBoundary;
- (id)trimmedInputStemForStem:(id)a0;

@end
