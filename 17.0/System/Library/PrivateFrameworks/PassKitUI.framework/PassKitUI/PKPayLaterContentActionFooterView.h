@class UIColor, NSString, _UIBackdropView, UIImage, UIView, PKPayLaterContentActionFooterViewContent;

@interface PKPayLaterContentActionFooterView : UIView {
    long long _backdropStyle;
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
    PKPayLaterContentActionFooterViewContent *_content;
}

@property (copy, nonatomic) NSString *leadingTitleText;
@property (retain, nonatomic) UIImage *leadingTitleIcon;
@property (retain, nonatomic) UIColor *leadingTitleTextColor;
@property (copy, nonatomic) NSString *leadingDetailText;
@property (retain, nonatomic) UIColor *leadingDetailTextColor;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIColor *buttonTintColor;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (nonatomic) BOOL showSpinner;

+ (id)leadingTitleFont;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (long long)preferredBackdropStyle;

@end
