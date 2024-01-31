@class UIStackView, NSString, NSHashTable, UIView, HRStackedButtonView, NSArray, NSLayoutConstraint, UILabel;

@interface HROnboardingBulletPointViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIStackView *bulletPointsView;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) UIView *lastBulletPointView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSHashTable *bulletPointBodyLabels;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *bodyString;
@property (readonly, nonatomic) NSArray *bulletPoints;
@property (readonly, nonatomic) NSString *buttonTitleString;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_bodyFont;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (void)updateUserInterfaceForStyle:(long long)a0;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_boldSubheadlineFont;
- (struct CGSize { double x0; double x1; })_bulletImageSize;
- (double)_cannotDoHeaderLastBaselineToCannotDoBodyFirstBaseline;
- (void)_setUpButtonFooterView;
- (void)_setupBulletPointViews;
- (id)_subheadlineFont;

@end
