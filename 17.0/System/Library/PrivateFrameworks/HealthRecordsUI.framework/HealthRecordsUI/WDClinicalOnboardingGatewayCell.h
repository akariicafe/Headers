@class UIStackView, WDBrandLogoView, HKBorderLineView, UILabel, NSLayoutConstraint;

@interface WDClinicalOnboardingGatewayCell : WDMedicalRecordGroupableCell

@property (readonly, nonatomic) WDBrandLogoView *logoView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *detailLabel;
@property (readonly, nonatomic) HKBorderLineView *featureDownloadView;
@property (readonly, nonatomic) HKBorderLineView *featureSharingView;
@property (readonly, nonatomic) UILabel *featureDownloadTitleLabel;
@property (readonly, nonatomic) UILabel *featureDownloadTextLabel;
@property (readonly, nonatomic) UILabel *featureSharingTitleLabel;
@property (readonly, nonatomic) UILabel *featureSharingTextLabel;
@property (readonly, nonatomic) NSLayoutConstraint *featureDownloadBottomConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *featureSharingBottomConstraint;
@property (readonly, nonatomic) UILabel *tapToConnectLabel;
@property (readonly, nonatomic) NSLayoutConstraint *tapToConnectLabelHeightConstraint;
@property (readonly, nonatomic) UIStackView *outerSpecContainerView;
@property (readonly, nonatomic) UIStackView *verticalSpecContainerView;

- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)_updateLabelVisibility;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupSubviews;
- (void)_createTitleLabel;
- (void)setUpConstraints;
- (void)_createLogoView;
- (void)_constrainStackViewContainerWithinContentView;
- (id)_contentViewMarginsGuide;
- (void)_createDetailLabel;
- (void)_createDownloadAvailableView;
- (void)_createOuterSpecContainerView;
- (void)_createSharingAvailableView;
- (void)_createSubtitleLabel;
- (void)_createTapToConnectLabel;
- (void)_createVerticalSpecContainerView;
- (void)_positionTapToConnectLabel;
- (void)_setAccessibilityIdentifiers;
- (void)_updateBasedOnAccessibilityCategory:(BOOL)a0;
- (void)_updateForContentSizeCategory:(id)a0;
- (void)configureWithGateway:(id)a0 dataProvider:(id)a1 connected:(BOOL)a2;

@end
