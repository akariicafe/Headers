@class UIImageView, UILabel, UIButton;

@interface PKPaymentSetupNoResultsView : UIView {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIcon:(id)a0;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)setActionButtonTitle:(id)a0 addTarget:(id)a1 action:(SEL)a2;

@end
