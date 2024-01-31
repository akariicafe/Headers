@class CAGradientLayer;

@interface HUFadeInButton : UIButton

@property (retain) CAGradientLayer *fadeLayer;
@property (nonatomic) BOOL shouldFadeRightToLeft;

+ (id)button;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
