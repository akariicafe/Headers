@class UIFont, NSString, UIButtonConfiguration, UILabel, UIButton;

@interface RUILinkLabel : UIView {
    UIButton *_linkButton;
    long long _textAlignment;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (retain, nonatomic) UIButtonConfiguration *buttonConfiguration;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIButton *linkButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_linkPressed;
- (void)_resize;

@end
