@class UILabel;

@interface DBSFineTuneEditTextTableCell : PSEditableTableCell {
    double _minValue;
    double _maxValue;
    BOOL _valueValid;
    UILabel *_validationLabel;
}

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;

@end
