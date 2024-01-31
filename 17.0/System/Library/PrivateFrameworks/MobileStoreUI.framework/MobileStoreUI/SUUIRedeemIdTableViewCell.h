@class NSString, UITextField;
@protocol SUUIRedeemIdTableViewCellDelegate;

@interface SUUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<SUUIRedeemIdTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setKeyboardType:(long long)a0;
- (void)setReturnKeyType:(long long)a0;
- (BOOL)resignFirstResponder;
- (BOOL)textFieldShouldClear:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)textFieldDidChange:(id)a0;
- (void)setPlaceholderText:(id)a0;
- (void)_initializeTextField;
- (void)setAutoCapitalizationType:(long long)a0;

@end
