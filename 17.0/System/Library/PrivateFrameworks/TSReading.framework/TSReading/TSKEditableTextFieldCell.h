@class UITextField;

@interface TSKEditableTextFieldCell : UITableViewCell

@property (retain, nonatomic) UITextField *textField;

- (void)dealloc;
- (void)endEditing;
- (void)textFieldDidEndEditing:(id)a0;
- (void)beginEditing;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
