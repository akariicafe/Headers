@class NSLayoutConstraint, UILabel, UIView, UIButton;

@interface GKDefaultPrivacyViewController : UIViewController

@property (retain, nonatomic) UILabel *publicTitle;
@property (retain, nonatomic) UILabel *publicSubTitle;
@property (retain, nonatomic) UILabel *friendsOnlyTitle;
@property (retain, nonatomic) UILabel *friendsOnlySubtitle;
@property (retain, nonatomic) UILabel *meOnlyTitle;
@property (retain, nonatomic) UILabel *meOnlySubtitle;
@property (retain, nonatomic) UIView *publicDivider;
@property (retain, nonatomic) UIView *publicContainer;
@property (retain, nonatomic) UIView *friendsOnlyContainer;
@property (retain, nonatomic) UIView *privateContainer;
@property (retain, nonatomic) UIButton *publicRadioButton;
@property (retain, nonatomic) UIButton *publicContainerButton;
@property (retain, nonatomic) UIButton *friendsOnlyRadioButton;
@property (retain, nonatomic) UIButton *friendsOnlyContainerButton;
@property (retain, nonatomic) UIButton *meOnlyRadioButton;
@property (retain, nonatomic) UIButton *meOnlyContainerButton;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) NSLayoutConstraint *topMargin;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonEqualMainTitleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonBottomConstraint;
@property (retain, nonatomic) UILabel *underageHintLabel;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *mainTitle;
@property (nonatomic) int profilePrivacyVisibility;
@property long long numberOfClicksOnPrivacySelection;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)updateUI;
- (void)button1Pressed:(id)a0;
- (void)button3Pressed:(id)a0;
- (void)button2Pressed:(id)a0;
- (void)nextPressed:(id)a0;
- (void)notNowButtonPressed:(id)a0;
- (void)reportPrivacySelectionClickAnalytics;

@end
