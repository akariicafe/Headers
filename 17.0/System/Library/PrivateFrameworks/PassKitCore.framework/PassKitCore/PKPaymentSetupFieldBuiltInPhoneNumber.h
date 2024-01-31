@interface PKPaymentSetupFieldBuiltInPhoneNumber : PKPaymentSetupFieldText

- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isBuiltIn;
- (id)_submissionStringForValue:(id)a0;
- (BOOL)hasDisplayFormat;

@end
