@class UIImageView;

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIImageView *_accessoryImageView;
}

@property (nonatomic) long long paymentCredentialType;
@property (nonatomic) BOOL hasDarkAppearance;

- (id)init;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (BOOL)textFieldShouldClear:(id)a0;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)_networkImage;
- (void)_updateNetworkImage;
- (void)pk_applyAppearance:(id)a0;
- (void)setPaymentSetupField:(id)a0;

@end
