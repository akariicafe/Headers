@class NSString, UIScrollView, NSLayoutConstraint, UIView;
@protocol HKOnboardingPageViewControllerDelegate;

@interface HKOnboardingBaseViewController : HKViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint;
@property (readonly, nonatomic, getter=isOnboarding) BOOL onboarding;
@property (nonatomic) long long upgradingFromAlgorithmVersion;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long leftButtonType;
@property (nonatomic) long long rightButtonType;
@property (retain, nonatomic) id<HKOnboardingPageViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *cancelWithConfirmAlertTitle;
@property (copy, nonatomic) NSString *cancelWithConfirmAlertContinueActionTitle;
@property (copy, nonatomic) NSString *cancelWithConfirmAlertAbortActionTitle;

- (void)viewWillAppear:(BOOL)a0;
- (id)titleFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_cancelButton;
- (id)_closeButton;
- (void)closeButtonTapped:(id)a0;
- (void)removeFooterView;
- (void)_setUpNavigationBar;
- (id)_skipButton;
- (id)_titleFontTextStyle;
- (void)skipButtonTapped:(id)a0;
- (id)_buttonForButtonType:(long long)a0;
- (void)setUpConstraints;
- (double)_titleTopToFirstBaselineLeading;
- (void)setUpUI;
- (void)_adjustScrollViewForFooterView;
- (id)_cancelWithConfirmButton;
- (void)cancelWithConfirmButtonTapped:(id)a0;
- (double)contentTop;
- (id)initForOnboarding:(BOOL)a0;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)presentAlertWithMessage:(id)a0;
- (void)presentAlertWithMessage:(id)a0 title:(id)a1;
- (void)presentLearnMoreAlertWithMessage:(id)a0 learnMoreTapped:(id /* block */)a1;
- (void)setFooterView:(id)a0 insets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (double)titleTopToFirstBaseline;
- (void)updateUserInterfaceForStyle:(long long)a0;

@end
