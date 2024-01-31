@class NSString, NSArray, NSSet, NSDate, NCAppPickerContentProvider;
@protocol NCModalNavigationControllerDelegate, NCDigestOnboardingNavigationControllerDelegate;

@interface NCDigestOnboardingNavigationController : NCModalNavigationController <NCOnboardingViewControllerDelegate> {
    NSArray *_appBundleIdentifiers;
    BOOL _appBundleIdentifiersMutated;
    NSArray *_deliveryTimes;
    BOOL _deliveryTimesMutated;
    NSSet *_shownAppBundleIdentifiers;
    BOOL _userFinishedOnboarding;
    NSDate *_startTime;
    BOOL _userDeferredOnboarding;
    BOOL _appPickerShowMoreButtonWasPressed;
    int _entrySource;
    int _finalUIShown;
    NCAppPickerContentProvider *_contentProvider;
    BOOL _waitingToPresentAppPicker;
}

@property (weak, nonatomic) id<NCModalNavigationControllerDelegate, NCDigestOnboardingNavigationControllerDelegate> presenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationControllerWithOnboardingDelegate:(id)a0 deferButtonText:(id)a1;
+ (id)navigationControllerWithOnboardingDelegate:(id)a0 deferButtonText:(id)a1 previousBundleIdentifiersSelection:(id)a2 previousDeliveryTimesSelection:(id)a3;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_initWithWithOnboardingDelegate:(id)a0 deferButtonText:(id)a1 previousBundleIdentifiersSelection:(id)a2 previousDeliveryTimesSelection:(id)a3 entrySource:(int)a4;
- (void)_pushToAppPicker;
- (void)_saveStateOfOnboardingViewController:(id)a0;
- (void)onboardingViewControllerDidDeferSetup:(id)a0;
- (void)onboardingViewControllerNextButtonTapped:(id)a0;

@end
