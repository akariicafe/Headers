@class NSURL, BSAction, PKPassBannerTrailingViewConfiguration, NSObject, PKPassBannerMinimalView, PLPlatterView, PKPassBannerTrailingView, UIFont, UILabel, UIView, UIColor, NSString, NSSet, PKPassBannerLeadingView, PKPass;
@protocol PKBannerViewControllerPresentable, OS_dispatch_source, SBUISystemApertureAccessoryView;

@interface PKPassBannerViewController : UIViewController <PKPassBannerMinimalViewDelegate, PKBannerViewController> {
    BOOL _isTransactionBanner;
    BOOL _walletForeground;
    BOOL _appeared;
    BOOL _revoked;
    NSObject<OS_dispatch_source> *_revokeTimer;
    long long _style;
    BOOL _updatingPreferredContentSize;
    PLPlatterView *_platter;
    UIView *_contentView;
    PKPassBannerLeadingView *_leadingView;
    PKPassBannerTrailingView *_trailingView;
    PKPassBannerMinimalView *_minimalView;
    UIFont *_primaryFont;
    UIFont *_secondaryFont;
    UILabel *_label;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

@property (readonly, nonatomic) PKPass *pass;
@property (readonly, copy, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) PKPassBannerTrailingViewConfiguration *trailingViewConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKBannerViewControllerPresentable> presentable;
@property (nonatomic) long long activeLayoutMode;
@property (readonly, nonatomic) long long contentRole;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (readonly, nonatomic) long long maximumLayoutMode;
@property (readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) long long minimumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, copy, nonatomic) NSSet *backgroundActivitiesToSuppress;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredCustomAspectRatio;
@property (readonly, nonatomic) long long preferredCustomLayout;
@property (readonly, nonatomic) unsigned long long presentationBehaviors;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;

+ (id)createForTransactionWithPass:(id)a0 primaryText:(id)a1 secondaryText:(id)a2 trailingViewConfiguration:(id)a3 walletForeground:(BOOL)a4;
+ (id)createWithPass:(id)a0 primaryText:(id)a1 secondaryText:(id)a2 trailingViewConfiguration:(id)a3 walletForeground:(BOOL)a4;

- (id)init;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)revoked;
- (void)presentableDidAppearAsBanner:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void)_tapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (void)passBannerMinimalViewDidChangeSize:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)a0;

@end
