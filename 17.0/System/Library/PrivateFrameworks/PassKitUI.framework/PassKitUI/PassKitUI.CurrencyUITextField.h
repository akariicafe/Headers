@interface PassKitUI.CurrencyUITextField : UITextField <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ _amount;
    void /* unknown type, empty encoding */ formatter;
    void /* unknown type, empty encoding */ isEditable;
}

- (void)resetSelection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)deleteBackward;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)editingChanged;

@end
