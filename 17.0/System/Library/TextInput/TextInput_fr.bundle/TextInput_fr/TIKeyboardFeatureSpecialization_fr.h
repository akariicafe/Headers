@interface TIKeyboardFeatureSpecialization_fr : TIKeyboardQuickTypeSpecialization

- (id)terminatorsDeletingAutospace;
- (id)nonstopPunctuationCharacters;
- (id)internalStringToExternal:(id)a0;
- (id)allAccentKeyStrings;
- (id)externalStringToInternal:(id)a0;
- (id)accentKeyStringForKeyboardState:(id)a0;
- (void *)createInputManager;
- (id)accentKeyStringForInputPrefix:(id)a0;

@end
