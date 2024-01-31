@interface PKPaymentSetupFieldBuiltInPrimaryAccountNumber : PKPaymentSetupFieldText

- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isBuiltIn;
- (id)compactLocalizedDisplayName;
- (id)displayFormatPaddingCharacters;
- (BOOL)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;

@end
