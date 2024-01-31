@interface TIKeyboardFeatureSpecialization_ain : TIKeyboardFeatureSpecialization

- (id)internalStringToExternal:(id)a0;
- (id)wordCharacters;
- (id)findPrefixMatchesFor:(id)a0 fromIndex:(unsigned long long)a1 usingCompositionMap:(id)a2 matchesInputAsPrefix:(BOOL)a3;
- (BOOL)shouldConvertEagerly;

@end
