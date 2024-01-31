@interface NewsFeed.DebugFormatCreatePackageTableViewCell : UITableViewCell <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ onChange;
    void /* unknown type, empty encoding */ textField;
    void /* unknown type, empty encoding */ disallowedCharacterSet;
}

- (void)prepareForReuse;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithCoder:(id)a0;

@end
