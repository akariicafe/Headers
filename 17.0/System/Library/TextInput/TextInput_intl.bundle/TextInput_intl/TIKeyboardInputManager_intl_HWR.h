@class CHRecognizer, NSArray, TIHandwritingStrokes;

@interface TIKeyboardInputManager_intl_HWR : TIKeyboardInputManager

@property (readonly, nonatomic) CHRecognizer *recognizer;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing;
@property (retain, nonatomic) NSArray *candidates;

- (BOOL)suppliesCompletions;
- (BOOL)usesCandidateSelection;
- (void)clearInput;
- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (id)keyboardBehaviors;
- (BOOL)supportsReversionUI;
- (unsigned int)inputCount;
- (void).cxx_destruct;
- (id)candidateResultSet;
- (BOOL)usesAutoDeleteWord;
- (id)handleKeyboardInput:(id)a0;
- (void)loadDictionaries;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)deleteFromInputWithContext:(id)a0;
- (void)inputLocationChanged;
- (BOOL)supportsLearning;
- (void)syncMarkedTextForKeyboardState:(id)a0 afterContextChange:(BOOL)a1;
- (id)addInputObject:(id)a0 withContext:(id)a1;
- (BOOL)isDummyCandidate:(id)a0;
- (id)recognitionResultsForStrokes:(id)a0 context:(id)a1;
- (void)updateCandidates;

@end
