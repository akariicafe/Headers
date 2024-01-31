@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (id)nonstopPunctuationCharacters;
- (id)wordSeparator;
- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (id)keyboardBehaviors;
- (BOOL)supportsReversionUI;
- (id)replacementForDoubleSpace;
- (BOOL)supportsLearning;

@end
