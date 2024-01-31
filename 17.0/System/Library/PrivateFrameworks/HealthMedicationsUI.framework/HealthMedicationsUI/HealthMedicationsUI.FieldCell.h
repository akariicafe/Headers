@interface HealthMedicationsUI.FieldCell : UICollectionViewListCell <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_textField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_numberFormatter;
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ item;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)didTapCell;
- (void)didTapDoneWithSender:(id)a0;
- (void)textFieldDidChangeWithSender:(id)a0;

@end
