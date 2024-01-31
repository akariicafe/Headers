@class TIMecabraCandidate;

@interface TIKeyboardInputManager_zh_Toneless : TIKeyboardInputManager_zh_Base

@property (copy, nonatomic) TIMecabraCandidate *inlineCandidate;
@property (nonatomic) BOOL dynamic;
@property (nonatomic) BOOL assertDefaultKeyPlane;

- (void)clearInput;
- (id)inputString;
- (void).cxx_destruct;
- (id)handleKeyboardInput:(id)a0;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)defaultCandidate;
- (void)commitComposition;
- (id)didAcceptCandidate:(id)a0;
- (void)generateCandidatesWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 candidateHandler:(id)a2;
- (id)groupedCandidatesFromCandidates:(id)a0 usingSortingMethod:(id)a1;
- (BOOL)keyboardConfigurationAssertDefaultKeyPlane;
- (id)keyboardConfigurationLayoutTag;
- (void)setPhraseBoundary:(unsigned long long)a0;
- (BOOL)supportsCandidateGeneration;
- (void)updateComposedText;
- (id)validCharacterSetForAutocorrection;
- (void)activateRetroCorrection;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (id)initWithInputMode:(id)a0 keyboardState:(id)a1 dynamic:(BOOL)a2;
- (BOOL)shouldSearchCompletionForSubstrings;

@end
