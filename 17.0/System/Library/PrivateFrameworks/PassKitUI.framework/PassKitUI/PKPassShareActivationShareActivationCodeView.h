@class PKContinuousButton, NSString, UILabel, UIView;
@protocol PKPassShareActivationShareActivationCodeViewDelegate;

@interface PKPassShareActivationShareActivationCodeView : UIView {
    id<PKPassShareActivationShareActivationCodeViewDelegate> _delegate;
    UIView *_activationCodeBackgroundView;
    UILabel *_activationCodeLabel;
    PKContinuousButton *_phoneButton;
    PKContinuousButton *_shareButton;
    PKContinuousButton *_copyButton;
}

@property (retain, nonatomic) NSString *activationCode;
@property (nonatomic) BOOL showPhoneCallButton;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_shareButtonPressed;
- (void)_copyActivationCode;
- (void)_copyButtonPressed;
- (void)_phoneButtonPressed;
- (void)_showCopyMenu;

@end
