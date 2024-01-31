@class UILabel, UITextField, UIStackView;

@interface FPUIAuthenticationTextInputCell : UITableViewCell {
    UIStackView *_stackView;
}

@property (readonly, weak, nonatomic) UILabel *label;
@property (readonly, weak, nonatomic) UITextField *textField;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)_isLargeTextTraitCollection:(id)a0;
- (void)updateForChangedContentSizeCategory;

@end
