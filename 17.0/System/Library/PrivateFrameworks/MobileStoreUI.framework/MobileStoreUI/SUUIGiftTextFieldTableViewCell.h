@class NSString, UITextField, UILabel, NSAttributedString, UIView;
@protocol UITextFieldDelegate;

@interface SUUIGiftTextFieldTableViewCell : UITableViewCell {
    UILabel *_label;
    UIView *_topBorderView;
}

@property (nonatomic) BOOL leftToRight;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) UITextField *textField;
@property (nonatomic) id<UITextFieldDelegate> textFieldDelegate;
@property (copy, nonatomic) NSString *value;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
