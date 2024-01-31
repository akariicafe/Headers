@class NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface NCNotificationListSectionRevealHintView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>

@property (retain, nonatomic) SBUILegibilityLabel *revealHintTitle;
@property (nonatomic) double hintingAlpha;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double revealPercentage;
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (double)minimumViewHeight;

- (BOOL)adjustForContentSizeCategoryChange;
- (void)_updateAlpha;
- (double)_hintTitleDisplacementForRevealPercentage:(double)a0;
- (id)_labelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureRevealHintTitleIfNecessary;
- (void).cxx_destruct;
- (void)_layoutRevealHintTitle;
- (void)layoutSubviews;
- (double)_alphaValueBasedOnRevealPercentage;
- (void)adjustForLegibilitySettingsChange:(id)a0;

@end
