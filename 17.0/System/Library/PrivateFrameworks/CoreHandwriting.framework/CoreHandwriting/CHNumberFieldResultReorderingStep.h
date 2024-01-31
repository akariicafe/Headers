@class NSDictionary, NSCharacterSet;

@interface CHNumberFieldResultReorderingStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet *_allowedCharacters;
    NSDictionary *_characterReplacements;
}

- (void).cxx_destruct;
- (id)initForDigitFields;
- (id)initForPhoneNumberFields;
- (id)process:(id)a0 options:(id)a1;

@end
