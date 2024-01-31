@interface HealthMedicationsUI.DosageCollectionViewCell : UICollectionViewListCell <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ currentDosage;
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deleteAccessory;
    void /* unknown type, empty encoding */ timePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_toolbar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_valueField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_valueLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spacerAccessory;
    void /* unknown type, empty encoding */ currentLayoutConstraints;
}

- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doneTapped;
- (void)textFieldChanged:(id)a0;
- (void)timePickerChanged:(id)a0;
- (void)valueLabelTapped:(id)a0;

@end
