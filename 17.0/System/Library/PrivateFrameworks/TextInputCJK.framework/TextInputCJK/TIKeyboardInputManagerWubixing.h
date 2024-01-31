@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (BOOL)supportsNumberKeySelection;
- (BOOL)acceptAutocorrectionCommitsInline;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)keyboardBehaviors;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (unsigned long long)initialSelectedIndex;
- (int)inputMethodType;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)sortingMethods;
- (void)updateMarkedText;
- (BOOL)isValidWubiInput:(id)a0;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;

@end
