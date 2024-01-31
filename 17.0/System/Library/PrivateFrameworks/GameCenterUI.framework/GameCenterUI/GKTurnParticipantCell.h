@class UIStackView, UIView, NSArray, GKTurnBasedParticipant, GKLabel, UIImageView, NSDictionary, GKFocusableButton, NSLayoutConstraint, GKTurnBasedMatch, UILabel, _TtC12GameCenterUI22OverlappingPlayersView;

@interface GKTurnParticipantCell : GKBasePlayerCell

@property (retain, nonatomic) GKLabel *bottomLabel;
@property (retain, nonatomic) GKFocusableButton *detailButton;
@property (retain, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UIStackView *textStackView;
@property (retain, nonatomic) NSLayoutConstraint *iconLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textStackViewToSuperViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textStackViewToIconViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *statusImageTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textContainerTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *detailButtonConstraint;
@property (retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *overlappingPlayersViewTrailingConstraint;
@property (retain, nonatomic) _TtC12GameCenterUI22OverlappingPlayersView *overlappingPlayersView;
@property (retain, nonatomic) UIView *overlappingPlayersViewContainer;
@property (retain, nonatomic) UILabel *additionalPlayerCountLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSDictionary *playerAvatarMapping;
@property (retain, nonatomic) NSArray *previousParticipants;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) GKTurnBasedParticipant *participant;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic) BOOL isDetail;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIView *divider;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)a0;

- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)configureOverlappingPlayersView;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)detailPressed:(id)a0;
- (void)didUpdateModel;
- (void)establishConstraints;
- (double)getOverlappingPlayerAvatarIconSize;
- (id)getPlayerIDForAllNonAutomatchedTurnBasedParticipants;
- (BOOL)matchWantsLocalPlayerAttention;
- (BOOL)needsRefreshOverlappingPlayersView;
- (void)updateMarginConstraints;
- (void)updateOverlappingPlayerViewsAvatar;
- (void)updateUIBasedOnTraitCollection;

@end
