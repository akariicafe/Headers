@class NSString, BPSWatchView, UIScrollView, UILabel, UIButton;

@interface BPSSetupOptinViewController : BPSSetupPageViewController <BPSBuddyController>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailTextTitleLabel;
@property (retain, nonatomic) UILabel *detailTextLabel;
@property (retain, nonatomic) BPSWatchView *watchView;
@property (retain, nonatomic) UIButton *suggestedChoiceButton;
@property (retain, nonatomic) UIButton *alternateChoiceButton;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIButton *okayButton;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)detailString;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)imageTintColor;
- (void).cxx_destruct;
- (double)sidePadding;
- (id)alternateButtonTitle;
- (id)imageResource;
- (void)alternateButtonPressed:(id)a0;
- (void)suggestedButtonPressed:(id)a0;
- (id)suggestedButtonTitle;
- (void)applyConfirmedOptin:(BOOL)a0;
- (id)imageResourceBundleIdentifier;
- (BOOL)wantsLightenBlendedScreen;
- (double)noHWImageOffset;
- (id)okayButtonTitle;
- (void)_madeOptinChoice:(BOOL)a0 withAlertController:(id)a1;
- (double)alternateButtonDetailTextPaddingWithImage;
- (id)detailAttributedString;
- (id)detailTitleString;
- (double)imageDetailPadding;
- (void)learnMoreButtonPressed:(id)a0;
- (id)learnMoreButtonTitle;
- (double)noHWDetailOffset;
- (void)okayButtonPressed:(id)a0;
- (double)okayButtonTopPadding;
- (id)optinLocalizationBundle;
- (id)optinLocalizationStringsFile;
- (void)showOptinConfirmationAlert:(id)a0 optinChoice:(BOOL)a1;
- (double)suggestedChoicePillDetailTextLabelVerticalOffset;
- (BOOL)wantsAlternateChoicePillButton;
- (BOOL)wantsAlternateChoiceSystemButton;
- (BOOL)wantsLearnMoreButton;
- (BOOL)wantsOkayPillButton;
- (BOOL)wantsSuggestedChoicePillButton;
- (BOOL)wantsToShowWatchHW;

@end
