@class NSString, UIGestureRecognizer;

@interface HKNavigationController : UINavigationController <UINavigationControllerDelegate, HKInternalSettingsGestureHandler>

@property (retain, nonatomic) UIGestureRecognizer *internalSettingsGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)onInternalSettingsGesture;
- (void)horizontalSizeClassDidChangeWithTraitEnvironment:(id)a0 previousTraitCollection:(id)a1;
- (void)reparentViewControllerIfNecessaryWithTraitCollection:(id)a0 previousTraitCollection:(id)a1;
- (void)updateTraits;

@end
