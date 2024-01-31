@class UIView, NSString, UITapGestureRecognizer, GKDashboardPlayerPhotoView, UIImageView, GKGradientLabel, NSLayoutConstraint, UILabel;
@protocol GKAvatarContainerViewDelegate;

@interface GKAvatarContainerView : UIView <GKPlayerAvatarViewDelegate>

@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *emailLabel;
@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) GKGradientLabel *editLabel;
@property (retain, nonatomic) UIView *editImage;
@property (retain, nonatomic) UIImageView *editImageBackground;
@property (retain, nonatomic) NSLayoutConstraint *imageContainerTopConstraint;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<GKAvatarContainerViewDelegate> delegate;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)updateAvatarEditingAvailability;
- (void)didSelectPlayerAvatarView:(id)a0;
- (void)didSetPlayerAvatarImage:(id)a0;
- (void)prepareForDefaultNicknameViewController;
- (void)refreshHeaderViewProfileImage;
- (void)refreshViewForLocalPlayer;
- (void)setupEditImageBackground;

@end
