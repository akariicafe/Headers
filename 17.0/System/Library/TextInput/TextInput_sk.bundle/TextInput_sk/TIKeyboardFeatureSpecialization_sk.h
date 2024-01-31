@interface TIKeyboardFeatureSpecialization_sk : TIKeyboardFeatureSpecialization

- (id)nonstopPunctuationCharacters;
- (id)internalStringToExternal:(id)a0;
- (id)allAccentKeyStrings;
- (id)externalStringToInternal:(id)a0;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)doesComposeText;
- (id)accentKeyStringForKeyboardState:(id)a0;

@end
