@class UIStackView, UIView, ICQPremiumOffer, NSString, ICQAsyncImageView, NSLayoutConstraint, ICQPremiumButton, UILabel, _ICQOpportunityBubbleReportingSpecification;
@protocol ICQTileViewDelegate;

@interface ICQTileView : ICQBannerView <ICQUpgradeFlowManagerDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) ICQAsyncImageView *iconImageView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) ICQPremiumButton *dismissButton;
@property (retain, nonatomic) ICQPremiumButton *primaryButton;
@property (retain, nonatomic) ICQPremiumButton *secondaryButton;
@property (retain, nonatomic) UIStackView *actionButtonsStack;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelDismissButtonSpacingConstraint;
@property (retain, nonatomic) _ICQOpportunityBubbleReportingSpecification *reportingDetails;
@property (retain, nonatomic) ICQPremiumOffer *premiumOffer;
@property (weak, nonatomic) id<ICQTileViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowForPremiumOffer:(id)a0;

- (void)_registerForDarwinNotifications;
- (id)attributedText;
- (void).cxx_destruct;
- (void)configureSubviews;
- (void)actionButtonTapped:(id)a0;
- (id)initWithPremiumOffer:(id)a0;
- (void)dismissButtonTapped:(id)a0;
- (void)createButtonsFromBubbleDetails:(id)a0;
- (void)createSeparator;
- (id)_getOffer;
- (BOOL)_launchFlowManagerWithLink:(id)a0;
- (void)_startOnDeviceJourneyForSystemUpgrade;
- (void)_updateBannerViewConstraints;
- (void)createActionButtons;
- (void)createActionButtonsStack;
- (id)createLabelWithText:(id)a0;
- (void)createOrUpdateImageViewFromImageDetails:(id)a0;
- (void)createOrUpdateMessageLabelWithMessage:(id)a0;
- (void)createOrUpdateTitleLabelWithTitle:(id)a0;
- (id)detailAttributedText;
- (BOOL)handleActionFromLink:(id)a0;
- (void)updateDismissButtonWithAction:(id)a0;
- (void)updatePrimaryButtonWithAction:(id)a0;
- (void)updateSecondaryButtonWithAction:(id)a0;
- (void)updateTileViewWithOffer:(id)a0;

@end
