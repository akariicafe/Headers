@class UIColor, UIButton, NSString, SLHighlight, NSLayoutConstraint, UIMenu, SLHighlightPillView;
@protocol SLAttributionViewDelegate;

@interface SLAttributionView : UIView <SLHighlightPillViewDelegate>

@property (retain, nonatomic) SLHighlight *highlight;
@property (nonatomic) BOOL isCollaboration;
@property (retain, nonatomic) SLHighlightPillView *pillView;
@property (nonatomic) long long preferredAlignment;
@property (nonatomic) long long preferredBackgroundStyle;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (nonatomic) BOOL usesBannerLayout;
@property (retain, nonatomic) NSLayoutConstraint *ourWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *ourHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *pillHorizontalAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonXDimensionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *closeButtonVerticalConstraint;
@property (nonatomic) double maxWidthForClippingMarquee;
@property (nonatomic) BOOL marqueeRequired;
@property (readonly, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<SLAttributionViewDelegate> delegate;
@property (nonatomic) BOOL enablesMarquee;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) NSString *hideMenuItemTitle;
@property (retain, nonatomic) UIMenu *supplementalMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentTranscriptForAttributionIdentifier:(id)a0 attachmentGUID:(id)a1 presentingViewController:(id)a2;
+ (void)presentTranscriptForAttributionIdenfitier:(id)a0 attachmentGUID:(id)a1 presentingViewController:(id)a2;
+ (void)presentTranscriptForAttributionIdentifier:(id)a0 presentingViewController:(id)a1;
+ (void)presentTranscriptForAttributionIdenfitier:(id)a0 presentingViewController:(id)a1;
+ (void)useNewDefaultBackgroundStyle;

- (void)prepareLayout;
- (void)dealloc;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)variant;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)useBannerLayout;
- (id)initWithHighlight:(id)a0;
- (void)updateBackgroundStyle:(long long)a0;
- (id)contextMenuItems;
- (void)updateAlignment:(long long)a0;
- (void)loadCloseButton;
- (long long)_alignmentEnforcingPolicies;
- (id)_backgroundColorEnforcingPolicies;
- (long long)_backgroundStyleEnforcingPolicies;
- (void)_crossPlatformCloseButtonTapped:(id)a0;
- (BOOL)_crossPlatformIsRTL;
- (void)_crossPlatformNeedsLayout;
- (void)_crossPlatformNeedsUpdateConstraints;
- (BOOL)_hasiOSBannerVariant;
- (double)_minHeightForCurrentStyle;
- (void)_sanitizeFrameIfNecessaryForTAMIC;
- (void)_updateMarqueeRequiredIfNecessary;
- (void)_updateMarqueeTargetContentAlignment;
- (id)additionalContextMenuItemsForHighlightPillView:(id)a0;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (void)feedbackForCloseButtonHit;
- (void)highlightPillViewDidLoadNewRemoteContent:(id)a0;
- (void)prepareLayoutWithMaxWidth:(double)a0;
- (void)updateBackgroundColor:(id)a0;
- (void)updateInterfaceStyle:(long long)a0;

@end
