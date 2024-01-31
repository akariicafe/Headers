@class NSString, NSMutableString;

@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    BOOL _keepRemainingInput;
}

@property (readonly, nonatomic) NSMutableString *searchString;
@property (retain, nonatomic) NSString *remainingInput;
@property (nonatomic) BOOL previousActionWasAutoConfirmation;

- (BOOL)acceptInputString:(id)a0;
- (id)searchStringForMarkedText;
- (BOOL)suppliesCompletions;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (BOOL)shouldExtendPriorWord;
- (BOOL)hasCandidates;
- (id)keyboardBehaviors;
- (BOOL)supportsReversionUI;
- (unsigned int)inputCount;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)a0;
- (id)candidateResultSet;
- (BOOL)usesAutoDeleteWord;
- (void)acceptInput;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)loadDictionaries;
- (unsigned long long)initialSelectedIndex;
- (id)didAcceptCandidate:(id)a0;
- (void)inputLocationChanged;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfigurationLayoutTag;
- (id)rawInputString;
- (id)sortingMethods;
- (BOOL)supportsLearning;
- (void)cancelCandidatesThread;
- (id)formattedSearchString;
- (id)markedTextWithAutoconvertedCandidates;
- (void)notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (BOOL)shouldLookForCompletionCandidates;
- (BOOL)updateCandidatesWithTIWordSearch:(id)a0 predictionEnabled:(BOOL)a1;

@end
