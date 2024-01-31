@interface TIKeyboardInputManagerPinyin : TIKeyboardInputManagerChinesePhonetic

- (BOOL)acceptAutocorrectionCommitsInline;
- (BOOL)usesPunctuationKeysForRowNavigation;
- (id)keyboardBehaviors;
- (BOOL)usesAutoDeleteWord;
- (unsigned long long)initialSelectedIndex;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)validCharacterSetForAutocorrection;
- (BOOL)supportsPairedPunctutationInput;
- (BOOL)isSpecialInput:(id)a0;
- (BOOL)shouldSearchCompletionForSubstrings;
- (BOOL)currentShuangpinTypeUsesSemicolon;
- (BOOL)isShuangpinSemicolon:(id)a0;
- (id)remapInput:(id)a0 isFacemarkInput:(BOOL *)a1;
- (BOOL)usesGeometryModelData;

@end
