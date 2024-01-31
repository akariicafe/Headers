@class UILabel, MUPlaceCoverPhotoOptions, UILayoutGuide, MKTransitInfoLabelView, UIView, MUImageView, NSString, NSLayoutConstraint, MUStackLayout, MUPlaceCoverPhotoTransitionController, MUVerifiedLogoImageView, MULinkView, MUCardButton;
@protocol MUPlaceHeaderViewModel, MUPlaceHeaderViewDelegate;

@interface MUPlaceHeaderView : UIView <MUActivityObserving> {
    MUImageView *_heroImageView;
    MUImageView *_verifiedBusinessCoverPhotoImageView;
    MUVerifiedLogoImageView *_verifiedBusinessLogoImageView;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    MULinkView *_containmentLabel;
    UILabel *_verifiedLabel;
    UILabel *_contactAddressDescription;
    UIView *_verifiedBusinessContainerView;
    MUCardButton *_shareButton;
    MKTransitInfoLabelView *_transitInfoLabelView;
    id /* block */ _trailingConstraintProvider;
    NSLayoutConstraint *_titleTrailingConstraint;
    NSLayoutConstraint *_verifiedBusinessHeaderHeightConstraint;
    UILayoutGuide *_topToTitleLayoutGuide;
    MUStackLayout *_stackLayout;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
    struct MUPlaceHeaderMetrics { double topToTitleSpacing; struct MUPlaceCoverPhotoMetrics { double aspectRatio; BOOL hasLogo; struct CGSize { double width; double height; } logoSize; double coverPhotoBottomToLogoBottomSpacing; double coverPhotoContainerToTitleSpacing; double startingLogoAlphaTransitionValue; double endingLogoAlphaTransitionValue; } coverPhotoMetrics; } _headerMetrics;
    MUPlaceCoverPhotoTransitionController *_coverPhotoTransitionController;
}

@property (nonatomic) double verifiedBusinessHeaderHeight;
@property (retain, nonatomic) id<MUPlaceHeaderViewModel> viewModel;
@property (weak, nonatomic) id<MUPlaceHeaderViewDelegate> delegate;
@property (nonatomic) BOOL suppressContainmentTap;
@property (readonly, nonatomic) MUPlaceCoverPhotoOptions *coverPhotoOptions;
@property (readonly, nonatomic) BOOL shouldBlurChromeHeaderButtons;
@property (readonly, nonatomic) UILayoutGuide *titleLabelToTopLayoutGuide;
@property (readonly, nonatomic) UIView *viewForContainmentString;
@property (nonatomic) double verifiedBusinessHeaderAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimalModeHeight;

- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (id)initWithViewModel:(id)a0 coverPhotoOptions:(id)a1 trailingConstraintProvider:(id /* block */)a2;
- (void)_shareButtonPressed;
- (void)_tappedEnclosingPlace;
- (double)_trailingPadding;
- (void)_updateContainmentLineWithAttributedString;
- (void)_updateCoverPhoto;
- (void)_updateWithTransitionController:(id)a0;
- (id)_verifiedAttributedString;
- (void)hideTitle:(BOOL)a0;
- (id)initWithViewModel:(id)a0 trailingConstraintProvider:(id /* block */)a1;
- (void)reloadTrailingConstraint;
- (void)setVerifiedBusinessHeaderExpansionProgress:(double)a0;

@end
