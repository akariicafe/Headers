@class GKDashboardPlayerPhotoView, UILabel, UIView;

@interface GKNotificationBannerView : UIView

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (nonatomic) BOOL canTransitionToPlayerAvatar;
@property (retain, nonatomic) UIView *leadingAccessoryView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (readonly, nonatomic) double preferredBannerWidth;
@property (nonatomic) BOOL useShortBanner;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ touchHandler;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)hideBanner;
- (void)createTitleLabel:(id)a0 withTextStyle:(id)a1;
- (void)_wasTouched:(id)a0;
- (void)callCompletionHandler;
- (void)createBackdropViewWithBlurStyle:(long long)a0;
- (void)createMessageLabel:(id)a0 withTextStyle:(id)a1;
- (void)fadeInWithCompletionHandler:(id /* block */)a0;
- (void)fadeOutQuickly:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 message:(id)a2 useShortBanner:(BOOL)a3;
- (id)initWithTitle:(id)a0 player:(id)a1 leadingAccessoryView:(id)a2 message:(id)a3 useShortBanner:(BOOL)a4;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(id /* block */)a0;
- (void)showWithTouchHandler:(id /* block */)a0;
- (void)startLoadingPlayerAvatar;
- (void)transitionToPlayerAvatar;

@end
