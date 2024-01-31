@class UIVisualEffectView, UIImageView, UILabel, UIView, UIButton;
@protocol CKObscurableBalloonViewDelegate;

@interface CKObscurableBalloonView : CKBalloonView

@property (retain, nonatomic) UIView *obscuringView;
@property (retain, nonatomic) UIVisualEffectView *blurEffect;
@property (retain, nonatomic) UILabel *sensitiveContentDescription;
@property (retain, nonatomic) UIImageView *obscuredContentBadgeView;
@property (weak, nonatomic) id<CKObscurableBalloonViewDelegate> obscurableBalloonDelegate;
@property (readonly, nonatomic, getter=isObscured) BOOL obscured;
@property (retain, nonatomic) UIButton *warningButton;
@property (retain, nonatomic) UIButton *showButton;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)tapGestureRecognized:(id)a0;
- (void)_presentGetHelpAlert:(id)a0;
- (void)_setupForAdultsIn:(id)a0 revealingContent:(BOOL)a1;
- (void)_setupForChildrenIn:(id)a0 withBadgeView:(id)a1;
- (void)_setupObscuringView:(BOOL)a0;
- (void)_setupWarningButtonIn:(id)a0 forRevealing:(BOOL)a1;
- (void)obscureSensitiveContent:(BOOL)a0;
- (void)revealSensitiveContent:(BOOL)a0;

@end
