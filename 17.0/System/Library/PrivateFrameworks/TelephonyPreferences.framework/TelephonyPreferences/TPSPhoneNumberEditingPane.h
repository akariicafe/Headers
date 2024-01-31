@class NSString;

@interface TPSPhoneNumberEditingPane : PSTextEditingPane

@property (copy, nonatomic) NSString *previousStringSuggestion;

- (void).cxx_destruct;
- (struct { id x0; unsigned long long x1; })suggestionsForString:(id)a0 inputIndex:(unsigned int)a1;
- (void)setPreferenceSpecifier:(id)a0;

@end
