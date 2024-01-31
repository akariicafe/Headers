@class SUUIClientContext, SUUIITunesPassConfiguration, UIImageView, UILabel, UIView;

@interface SUUIRedeemITunesPassLockup : UIControl {
    SUUIClientContext *_clientContext;
    SUUIITunesPassConfiguration *_configuration;
    UILabel *_descriptionLabel;
    UIView *_horizontalSeparatorView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_attributedDescriptionString;
- (id)initWithITunesPassConfiguration:(id)a0 clientContext:(id)a1;

@end
