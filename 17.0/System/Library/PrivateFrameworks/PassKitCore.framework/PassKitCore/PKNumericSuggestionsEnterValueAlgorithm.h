@class NSDecimalNumber, NSArray, NSString, NSDecimalNumberHandler, PKNumericSuggestionLastInput;

@interface PKNumericSuggestionsEnterValueAlgorithm : PKNumericSuggestionsAlgorithm {
    NSDecimalNumberHandler *_roundingBehavior;
    NSArray *_valuesToDefaults;
    NSArray *_defaultSuggestions;
    PKNumericSuggestionLastInput *_lastInput;
    BOOL _useBuiltInDefaults;
}

@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *minBalance;
@property (copy, nonatomic) NSDecimalNumber *maxBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (copy, nonatomic) NSArray *defaultValues;
@property (nonatomic) unsigned long long powerOfTenFactor;
@property (nonatomic) long long decimalPrecision;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) BOOL hasValidDefaultSuggestions;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_amountIsValid:(id)a0;
- (void)_generateCalculatedSuggestions;
- (id)_generateDefaultSuggestions;
- (id)_generateValuesToDefaults;
- (BOOL)_lastInputExistsInGeneratedSuggestions:(id)a0 withLastInput:(id)a1;
- (id)_maxAmountSuggestion;
- (BOOL)_possibleAmountIsValidWithDefaultValue:(id)a0 amount:(id)a1;
- (id)_possibleValueForAmount:(id)a0;
- (id)_useMaxAmountSuggestion;
- (BOOL)_useMaximumAmountSuggestionWithAmount:(id)a0;
- (id)initWithLastInput:(id)a0;
- (void)setUseBuiltInDefaults:(BOOL)a0;
- (id)suggestionsWithAmount:(id)a0;

@end
