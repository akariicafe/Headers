@class NSString, UIImage, UITraitCollection, _UIBackdropView, OBPrivacyLinkController, NSObject, AMSUIOnboardingViewController, UIVisualEffectView;
@protocol OS_dispatch_queue;

@interface AMPOnboardingViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) AMSUIOnboardingViewController *onboardingController;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *primaryButtonText;
@property (readonly, nonatomic) BOOL isPresentedInFormSheet;
@property (retain, nonatomic) UIVisualEffectView *statusBarVisualEffectView;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (readonly, nonatomic) UITraitCollection *cappedTraitCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic) BOOL viewHasAppeared;
@property (readonly, nonatomic) UIImage *headerImage;
@property (readonly, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (copy, nonatomic) id /* block */ primaryButtonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (id)childTraitCollectionForViewController:(id)a0;
- (void)didTapPrimaryButton:(id)a0;
- (id)initWithHeaderImage:(id)a0 titleText:(id)a1 descriptionText:(id)a2 primaryButtonText:(id)a3 privacyLinkController:(id)a4;
- (id)initWithTitleText:(id)a0 features:(id)a1 primaryButtonText:(id)a2 privacyLinkController:(id)a3;
- (void)updateOverrideTraits;

@end
