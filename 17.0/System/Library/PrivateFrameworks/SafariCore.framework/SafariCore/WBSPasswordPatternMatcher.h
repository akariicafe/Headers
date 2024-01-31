@interface WBSPasswordPatternMatcher : NSObject

- (unsigned long long)_directionFromHexCoordinate:(id)a0 to:(id)a1;
- (id)_characterRepetitionPatternForPasscode:(id)a0;
- (id)_commonPasscodeCharacterRepetitionPatterns;
- (id)_commonlySubstitutedCharacterSet;
- (id)_commonlySubstitutedCharactersMap;
- (id)_dateMatchesForPasscode:(id)a0;
- (void)_enumerateGraphemeClusterSubrangesOfString:(id)a0 withMinimumLength:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)_keyboardLayoutPatternMatchesForPassword:(id)a0;
- (id)_keyboardMatchWithPassword:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 shiftedCharacterCount:(unsigned long long)a2 keyboardIdentifier:(id)a3 keyboard:(id)a4;
- (id)_keyboardsByIdentifier;
- (id)_obviousSequenceStartCharacterSet;
- (id)_passwordVariationsWithoutCommonCharacterSubstitutions:(id)a0;
- (id)_passwordWithoutShiftedCharacters:(id)a0 shiftMap:(id)a1 outShiftedCharacterIndexSet:(id *)a2;
- (id)_patternWithFewestGuessesRequiredWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 patternMatches:(id)a1;
- (id)_repetitionMatchesForPasscode:(id)a0;
- (id)_repetitionMatchesForPassword:(id)a0 withMatches:(id)a1;
- (id)_sequenceMatchesForPasscode:(id)a0;
- (id)_sequencePatternMatchWithPassword:(id)a0 startIndex:(unsigned long long)a1 endIndex:(unsigned long long)a2 delta:(long long)a3;
- (id)_sequencePatternMatchesForPassword:(id)a0;
- (id)_wordListMatchesForPasscode:(id)a0 withWordListCollection:(id)a1;
- (id)_wordListMatchesForPassword:(id)a0 withWordListCollection:(id)a1;
- (id)patternMatchesForPasscode:(id)a0 withWordListCollection:(id)a1;
- (id)patternMatchesForPassword:(id)a0 withWordListCollection:(id)a1;

@end
