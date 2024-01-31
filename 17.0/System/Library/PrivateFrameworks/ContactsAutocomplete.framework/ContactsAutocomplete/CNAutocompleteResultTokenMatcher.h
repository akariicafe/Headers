@class NSArray, NSString;

@interface CNAutocompleteResultTokenMatcher : NSObject {
    NSArray *_tokens;
    NSString *_countryCode;
}

+ (id)indexTokensFromPhoneNumber:(id)a0;
+ (id)normalizePhoneNumber:(id)a0 countryCode:(id)a1;
+ (id)searchTokensFromString:(id)a0;
+ (id)tokenizePhoneNumber:(id)a0;

- (id)init;
- (id)initWithSearchString:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateResult:(id)a0;
- (BOOL)evaluateSingleResult:(id)a0;
- (BOOL)evaluateTopLevelGroupResult:(id)a0;
- (id /* block */)filterAdapter;
- (id)initWithSearchString:(id)a0 countryCode:(id)a1;
- (id)nameTokensForResult:(id)a0;
- (id)representationsOfPhoneNumber:(id)a0;
- (id)tokensForResultName:(id)a0;
- (id)tokensForResultValue:(id)a0;

@end
