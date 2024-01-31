@interface PKPaymentSetupFieldBuiltInCardOnFilePrimaryAccountNumber : PKPaymentSetupFieldText

- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (BOOL)isBuiltIn;
- (id)displayFormatPaddingCharacters;
- (BOOL)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;

@end
