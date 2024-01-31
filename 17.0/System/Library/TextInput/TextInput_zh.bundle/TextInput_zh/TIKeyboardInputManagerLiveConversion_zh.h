@class NSArray, TIKeyboardCandidate, NSString, TIZhuyinInputManager;

@interface TIKeyboardInputManagerLiveConversion_zh : TIKeyboardInputManagerChinesePhonetic

@property (copy, nonatomic) TIKeyboardCandidate *topCandidate;
@property (copy, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *remainingInput;
@property (copy, nonatomic) TIZhuyinInputManager *zhuyinInputManager;
@property (copy, nonatomic) NSString *cachedInputString;
@property (nonatomic) BOOL revertTonlessZhuyin;

- (BOOL)supportsNumberKeySelection;
- (void)clearInput;
- (BOOL)delayedCandidateList;
- (id)markedText;
- (id)keyEventMap;
- (id)inputString;
- (id)keyboardBehaviors;
- (void *)initImplementation;
- (unsigned int)inputCount;
- (void).cxx_destruct;
- (unsigned int)inputIndex;
- (id)handleKeyboardInput:(id)a0;
- (BOOL)usesLiveConversion;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)wordCharacters;
- (BOOL)commitsAcceptedCandidate;
- (unsigned long long)initialSelectedIndex;
- (id)keyBehaviorsForState:(id)a0;
- (int)inputMethodType;
- (BOOL)_adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)closeCandidateGenerationContextWithResults:(id)a0;
- (void)commitComposition;
- (id)didAcceptCandidate:(id)a0;
- (id)handleAcceptedCandidate:(id)a0 keyboardState:(id)a1;
- (id)rawInputString;
- (void)restoreGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)saveGeometryForInput:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)shouldClearInputOnMarkedTextOutOfSync;
- (void)syncToKeyboardState:(id)a0 from:(id)a1 afterContextChange:(BOOL)a2;
- (id)validCharacterSetForAutocorrection;
- (void)_notifyUpdateCandidates:(id)a0 forOperation:(id)a1;
- (id)phoneticSortingMethod;
- (void)_addInputToInternal:(id)a0;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (void)addInputToInternal:(id)a0;
- (id)composedTextForSelectedCandidate:(id)a0 remainingInput:(id)a1;
- (id)internalInputString;
- (void)presentSegmentAdjuster;
- (void)presentSegmentPickerIfNeeded;
- (BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)a0;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)skipSetMarkedTextDuringInput;
- (BOOL)updateCandidatesByWaitingForResults:(BOOL)a0;

@end
