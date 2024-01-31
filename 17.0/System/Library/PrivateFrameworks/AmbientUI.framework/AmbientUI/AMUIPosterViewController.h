@class UIView, NSString, NSArray, PRSPosterConfiguration, NSDictionary, AMUIPosterAppearanceTransitionCoordinator, PRUISAmbientPosterViewController, UIGestureRecognizer;
@protocol AMUIPosterViewControllerDelegate;

@interface AMUIPosterViewController : UIViewController <PRUISAmbientPosterViewControllerDelegate, AMUIAmbientViewControlling> {
    UIView *_touchBlockingView;
    UIGestureRecognizer *_tapGestureRecognizer;
    PRSPosterConfiguration *_configuration;
}

@property (class, readonly, copy, nonatomic) NSArray *suggestedInstanceIdentifiers;

@property (readonly, nonatomic, getter=_posterViewController) PRUISAmbientPosterViewController *posterViewController;
@property (nonatomic) long long contentMode;
@property (readonly, nonatomic) long long effectiveContentMode;
@property (weak, nonatomic) id<AMUIPosterViewControllerDelegate> delegate;
@property (nonatomic) long long chromeOrientationPolicy;
@property (retain, nonatomic) AMUIPosterAppearanceTransitionCoordinator *appearanceTransitionCoordinator;
@property (nonatomic) double appearanceTransitionProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *activeConfigurationMetadata;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)invalidate;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_snapshotController;
- (BOOL)handleDismiss;
- (void)ambientPosterViewController:(id)a0 relinquishExtensionInstanceIdentifier:(id)a1;
- (void)ambientPosterViewController:(id)a0 setChromeVisibility:(BOOL)a1 withAnimationSettings:(id)a2 animationFence:(id)a3;
- (unsigned long long)ambientPosterViewController:(id)a0 titleAlignmentForInterfaceOrientation:(long long)a1;
- (id)ambientPosterViewControllerRequestExtensionInstanceIdentifier:(id)a0;
- (void)_evaluateAuthenticationWithConfiguration:(id)a0;
- (id)_posterExtensionDisplayNameWithBundleIdentifier:(id)a0;
- (void)_triggerTapEvent:(id)a0;
- (void)_updateStateForContentMode:(long long)a0;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (BOOL)updatePosterConfiguration:(id)a0 withAnimationSettings:(id)a1;

@end
