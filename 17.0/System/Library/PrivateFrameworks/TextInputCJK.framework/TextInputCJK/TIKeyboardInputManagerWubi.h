@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>

@property (retain, nonatomic) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (BOOL)acceptInputString:(id)a0;
- (void)setInSplitKeyboardMode:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)inputsToReject;
- (void)checkAutocorrectionDictionaries;
- (int)inputMethodType;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)a0;
- (void)pushCandidateGenerationContextWithResults:(id)a0;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)isWubi:(id)a0;
- (id)formattedSearchString;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;

@end
