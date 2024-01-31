@interface TIKeyboardFeatureSpecialization_el : TIKeyboardFeatureSpecialization

- (id)nonstopPunctuationCharacters;
- (id)internalStringToExternal:(id)a0;
- (id)sentenceTrailingCharacters;
- (id)externalStringToInternal:(id)a0;
- (id)sentencePrefixingCharacters;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)doesComposeText;
- (id)sentenceDelimitingCharacters;
- (void *)createInputManager;

@end
