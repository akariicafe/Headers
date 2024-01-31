@class NSCharacterSet;

@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStepModifyingOriginalTokens {
    BOOL _shouldAddAlternatives;
    NSCharacterSet *_contextInvariantCharacterSet;
    NSCharacterSet *_forwardLookingCharacterSet;
    NSCharacterSet *_backwardLookingCharacterSet;
    NSCharacterSet *_widthAlternativeCharacterSet;
}

- (void).cxx_destruct;
- (id)initWithShouldAddAlternatives:(BOOL)a0;
- (id)process:(id)a0 options:(id)a1;

@end
