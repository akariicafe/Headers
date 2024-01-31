@interface TIKeyboardFeatureSpecialization_ta : TIKeyboardFeatureSpecialization

@property (nonatomic, getter=isQwertyLayout) BOOL qwertyLayout;

- (id)nonstopPunctuationCharacters;
- (BOOL)doesComposeText;
- (BOOL)allowsAutocorrectionOfValidWords;
- (BOOL)canConvertExternalToExternal;
- (BOOL)dictionaryUsesExternalEncoding;
- (BOOL)shouldConvertCandidateToExternal;
- (void)specializeInputManager:(void *)a0 forLayoutState:(id)a1;

@end
