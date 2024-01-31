@class NSString, NSNumberFormatter;

@interface PKTextfieldTableViewSettingsRowCurrencyFormatter : PKTextFieldTableViewSettingsRowFormatter {
    NSString *_currencyCode;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)formattedValueFromInput:(id)a0;
- (id)initWithCurrencyCode:(id)a0;
- (id)submissionValueFromFormattedInput:(id)a0;

@end
