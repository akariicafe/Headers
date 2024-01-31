@class UIButton, NSString, UIImageView, NSUUID, UIView, CKAvatarView, UILabel;

@interface CKTUConversationBalloonView : CKColoredBalloonView {
    char _orientation;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIImageView *sessionImageView;
@property (retain, nonatomic) UIView *sessionAccessoryView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel1;
@property (retain, nonatomic) UILabel *subtitleLabel2;
@property (retain, nonatomic) UIButton *joinButton;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL shouldRenderJoinButtonAsIcon;
@property (copy, nonatomic) NSString *joinButtonText_TestingOverride;
@property (nonatomic) unsigned long long conversationAVMode;
@property (retain, nonatomic) NSUUID *tuConversationUUID;
@property (nonatomic, getter=isUnknownSender) BOOL unknownSender;

+ (BOOL)_shouldAlwaysHideSessionImageView;
+ (BOOL)_shouldUseStackedLayout;
+ (struct CGSize { double x0; double x1; })appIconSize;

- (void)setOrientation:(char)a0;
- (char)color;
- (void)prepareForReuse;
- (void)contentSizeCategoryDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })imageViewSize;
- (char)orientation;
- (BOOL)joinButtonIsShowingImageContent;
- (id)_joinButtonText;
- (id)_currentCall;
- (id)_iconJoinButtonConfiguration;
- (void)_joinButtonTapped:(id)a0;
- (void)_multiWayCallStateChanged:(id)a0;
- (struct CGSize { double x0; double x1; })_preferredJoinButtonSize;
- (struct CGSize { double x0; double x1; })_preferredSessionImageViewSize;
- (id)_sharePlayImageWithDiameter:(double)a0;
- (BOOL)_shouldShowJoinButton;
- (BOOL)_shouldShowSessionView;
- (id)_textJoinButtonConfiguration;
- (void)chatParticipantsChanged:(id)a0;
- (void)configureForCurrentState;
- (void)configureForCurrentStateWithLayoutPass:(BOOL)a0;
- (void)configureForTUConversationChatItem:(id)a0;
- (void)configureIconView;
- (void)configureImageView;
- (void)configureJoinButton;
- (void)configureSessionAccessoryView;
- (void)configureSubtitle1;
- (void)configureSubtitle2;
- (void)configureTitle;
- (void)didHoverOverCell:(id)a0;
- (void)formatIconViewForActivity;
- (void)formatIconViewForFaceTime;
- (void)formatImageViewForActivity;
- (void)formatImageViewForFaceTime;
- (BOOL)joinButtonIsShowingTextContent;
- (struct CGSize { double x0; double x1; })joinButtonRenderedAsIconSize;
- (struct CGSize { double x0; double x1; })layoutSizeForSize:(struct CGSize { double x0; double x1; })a0 applyLayout:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (struct CGSize { double x0; double x1; })stackedLayoutSizeForSize:(struct CGSize { double x0; double x1; })a0 applyLayout:(BOOL)a1;
- (struct CGSize { double x0; double x1; })standardLayoutSizeForSize:(struct CGSize { double x0; double x1; })a0 applyLayout:(BOOL)a1;
- (id)subtitleColor;
- (id)tuConversation;
- (BOOL)wantsGradient;

@end
