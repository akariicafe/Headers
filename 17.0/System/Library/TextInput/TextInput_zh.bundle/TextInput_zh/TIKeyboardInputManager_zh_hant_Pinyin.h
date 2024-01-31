@interface TIKeyboardInputManager_zh_hant_Pinyin : TIKeyboardInputManagerPinyin

- (BOOL)usesContinuousPath;
- (id)keyEventMap;
- (id)locale;
- (void *)initImplementation;
- (int)inputMethodType;
- (BOOL)usesComposingInput;
- (id)phoneticSortingMethod;

@end
