@class UIStackView, NSDate, HRElectrocardiogramWatchAppInstallability, HRElectrocardiogramCurrentLocationOnboardingDeterminer, UIView, HRStackedButtonView, NSString, NSLayoutConstraint, UILabel, HKSeparatorLineView;

@interface HROnboardingElectrocardiogramAvailabilityViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, HKOnboardingCompactDatePickerViewDelegate>

@property (retain, nonatomic) HRElectrocardiogramCurrentLocationOnboardingDeterminer *onboardingAvailabilityDeterminer;
@property (retain, nonatomic) HRElectrocardiogramWatchAppInstallability *ecgAppInstallability;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *birthdayPromptLabel;
@property (retain, nonatomic) HKSeparatorLineView *birthdayTopSeparator;
@property (retain, nonatomic) UIStackView *birthdayEntryView;
@property (retain, nonatomic) NSDate *dateOfBirth;
@property (retain, nonatomic) HKSeparatorLineView *birthdayBottomSeparator;
@property (retain, nonatomic) UILabel *birthdayFooterLabel;
@property (retain, nonatomic) UILabel *locationFooterLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic) long long provenance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)titleString;
- (id)_bodyFont;
- (id)bodyString;
- (id)_titleFontTextStyle;
- (id)ageLimit;
- (void)compactDatePickerView:(id)a0 didChangeValue:(id)a1;
- (void)setUpConstraints;
- (id)_footnoteFont;
- (void)setUpUI;
- (id)buttonTitleString;
- (id)createHeroView;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (id)learnMoreString;
- (double)_ageEntryLastBaselineToBottomSeparator;
- (id)_ageEntryTitleFont;
- (double)_ageEntryTopSeparatorToFirstBaseline;
- (double)_agePromptLastBaselineToAgeEntryTop;
- (double)_birthdayFooterLastBaselineToContinueButton;
- (id)_birthdayPromptFont;
- (double)_bodyBottomToAgePromptTop;
- (id)_bodyFontTextStyle;
- (double)_bottomSeparatorToBirthdayFooterFirstBaseline;
- (id)_defaultDOB;
- (id)_footnoteTextStyle;
- (BOOL)_meetsAgeRequirement;
- (void)_setupBirthdayEntryView;
- (double)_titleBottomToBodyTop;
- (void)_trackElectrocardiogramOnboardingStepIfNeeded:(long long)a0 countryCode:(id)a1 algorithmVersion:(id)a2;
- (void)_updateDateOfBirthDisplay;
- (id)ageIneligiblePromptAckButtonString;
- (id)ageIneligiblePromptBodyString;
- (id)ageIneligiblePromptTitleString;
- (id)ageWithDate:(id)a0;
- (id)birthdayFooterString;
- (id)createLearnMoreExpandedView;
- (id)deviceNotSupportedBodyString;
- (id)disclaimerString;
- (id)featureDisabledBodyString;
- (id)initForOnboarding:(BOOL)a0 provenance:(long long)a1;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)locationFooterString;
- (id)locationNotFoundPromptBodyString;
- (id)locationNotFoundPromptTitleString;
- (id)watchOSVersionTooLowBodyString;

@end
