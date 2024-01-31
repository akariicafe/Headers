@class UILabel, UIImageView, SKUIItemOfferButton;

@interface ACUIAppInstallCell : PSTableCell {
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    UIImageView *_iconView;
    SKUIItemOfferButton *_installButton;
}

@property (nonatomic) int installState;

+ (id)specifierForAppWithDescription:(id)a0 target:(id)a1 action:(SEL)a2;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)_createInstallButton;
- (id)_createLabelForAppName:(id)a0;
- (id)_createLabelForPublisher:(id)a0;
- (void)_updateInstallButtonWithState:(int)a0;
- (void)_updateSubviewsWithInstallState:(int)a0;

@end
