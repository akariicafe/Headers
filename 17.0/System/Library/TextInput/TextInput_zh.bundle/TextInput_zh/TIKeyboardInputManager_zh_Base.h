@interface TIKeyboardInputManager_zh_Base : TIKeyboardInputManagerChinesePhonetic

- (BOOL)acceptInputString:(id)a0;
- (BOOL)supportsNumberKeySelection;
- (id)keyEventMap;
- (id)keyboardBehaviors;
- (void *)initImplementation;
- (id)inputsToReject;
- (int)inputMethodType;
- (id)phoneticSortingMethod;
- (BOOL)_shouldCommitInputDirectly:(id)a0;
- (BOOL)shouldSearchCompletionForSubstrings;

@end
