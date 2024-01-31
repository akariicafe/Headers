@class NSCharacterSet;

@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet *_openingBracketCharacters;
    NSCharacterSet *_closingBracketCharacters;
    NSCharacterSet *_openingQuoteCharacters;
    NSCharacterSet *_closingQuoteCharacters;
    NSCharacterSet *_symmetricQuoteCharacters;
}

- (id)init;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;

@end
