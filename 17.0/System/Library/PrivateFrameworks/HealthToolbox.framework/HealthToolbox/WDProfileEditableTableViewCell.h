@interface WDProfileEditableTableViewCell : WDProfileTableViewCell

+ (double)notEditingTrailingEdgeMargin;

- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_textFieldDidChange:(id)a0;

@end
