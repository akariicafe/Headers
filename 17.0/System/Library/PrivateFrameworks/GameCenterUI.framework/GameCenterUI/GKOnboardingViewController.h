@class UIStackView, UIView, NSString, UIImageView, OBPrivacyLinkController, NSLayoutConstraint, OBBoldTrayButton, UILabel, UIScrollView;

@interface GKOnboardingViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *privacyContainer;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) UIView *buttonContainer;
@property (retain, nonatomic) UIView *privacyContainerInScrollView;
@property (retain, nonatomic) UIView *continueButtonContainerInScrollView;
@property (retain, nonatomic) NSLayoutConstraint *welcomeStackViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *welcomeStackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *whatsnewStackViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *whatsnewStackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *privacyContainerInScrollViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonContainerWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonContainerInScrollViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonEqualWidthPrivacyContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonParitalWidthPrivacyContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewToBottomContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewToBottomSafeAreaConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewLeadingConstraint;
@property (retain, nonatomic) UIImageView *bubbleImageView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) OBBoldTrayButton *nextButton;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *welcomeStackView;
@property (retain, nonatomic) UIStackView *bottomStackView;
@property (retain, nonatomic) UILabel *navigationTitleLabel;
@property (retain, nonatomic) UIStackView *whatsNewStackView;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)constrainTextInView:(id)a0 toFontSize:(double)a1;
- (void)signOutPressed:(id)a0;
- (void)updateNavigationTitleLabelAlpha;
- (void)addPrivacyLink;
- (BOOL)allowSignOut;
- (void)configureWhatsNewList;
- (BOOL)isMainTitleVisible;
- (void)nextPressed:(id)a0;
- (void)notNowPressed:(id)a0;
- (void)reparentGDPRToNewParent:(id)a0;
- (void)reparentView:(id)a0 toSuperview:(id)a1;
- (void)secondaryButtonPressed:(id)a0;
- (void)setupNavigationBar;
- (void)showSignOutAlert;
- (void)updateUIBasedOnTraitCollection;

@end
