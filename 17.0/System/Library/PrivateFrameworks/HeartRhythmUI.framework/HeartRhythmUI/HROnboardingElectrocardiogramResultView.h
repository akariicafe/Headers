@class UIView, NSString, HRPaddingLabel, UIButton, HRVideoPlayerView, NSLayoutConstraint, UILabel, HKSeparatorLineView;

@interface HROnboardingElectrocardiogramResultView : UIView

@property (copy, nonatomic) NSString *badge;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *numberedTitle;
@property (retain, nonatomic) HRVideoPlayerView *playerView;
@property (copy, nonatomic) NSString *visibleBody;
@property (retain, nonatomic) HRPaddingLabel *badgeLabel;
@property (retain, nonatomic) UILabel *numberedTitleLabel;
@property (retain, nonatomic) UILabel *visibleBodyLabel;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIView *expandedView;
@property (retain, nonatomic) HKSeparatorLineView *separatorLineView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewOrVisibleBodyLabelTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isHidingNumberedTitle) BOOL hideNumberedTitle;
@property (nonatomic, getter=isAlwaysExpanded) BOOL alwaysExpanded;
@property (nonatomic) BOOL shouldHideSeparatorLine;

+ (id)resultViewWithItem:(id)a0;

- (void).cxx_destruct;
- (id)_badgeFont;
- (void)_setUpConstraints;
- (void)learnMoreButtonTapped:(id)a0;
- (void)_setUpUI;
- (double)_badgeTopToFirstBaseline;
- (double)_learnMoreButtonLastBaselineToBottom;
- (id)_numberedTitleFont;
- (double)_numberedTitleLastBaseLineToVideoTop;
- (double)_numberedTitleToBadgeLastBaseline;
- (double)_numberedTitleTopToFirstBaseline;
- (double)_playerViewOrVisibleBodyLabelTopConstant;
- (id)_playerViewOrVisibleBodyLabelTopConstraint;
- (void)_setUpNumberedTitleLabelConstraints;
- (void)_setUpPlayerViewTopConstraint;
- (void)_setUpVisibleBodyLabelTopConstraint;
- (void)_updateExpandedViewState;
- (void)_updateNumberedTitleViewState;
- (double)_visibleBodyFirstBaselineDistance;
- (id)_visibleBodyFont;
- (id)_visibleBodyFontTextStyle;
- (double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
- (id)initWithBadge:(id)a0 title:(id)a1 numberedTitle:(id)a2 visibleBodyText:(id)a3 video:(id)a4 expandedView:(id)a5;

@end
