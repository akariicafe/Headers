@interface CHCandidateRefinementStep : CHPostprocessingStepModifyingOriginalTokens {
    BOOL _shouldKeepOutOfPatternCandidates;
    BOOL _shouldKeepDuplicateTokenIDs;
    BOOL _shouldKeepOutOfLexiconAlternatives;
    BOOL _shouldKeepAlternativeLengths;
    BOOL _shouldKeepSubstrings;
    BOOL _shouldKeepOriginalSpelling;
}

- (id)initWithShouldKeepOutOfPatternCandidates:(BOOL)a0 shouldKeepDuplicateTokenIDs:(BOOL)a1 shouldKeepOutOfLexiconAlternatives:(BOOL)a2 shouldKeepAlternativeLengths:(BOOL)a3 shouldKeepSubstrings:(BOOL)a4 shouldKeepOriginalSpelling:(BOOL)a5;
- (id)process:(id)a0 options:(id)a1;

@end
