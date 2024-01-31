@class BKUIOrientationStateHandler, BKUIPearlCoachingController, BKUIPearlEnrollControllerPreloadedState, BKUIPearlEnrollViewController, BKIdentity, NSString, UINavigationBar;
@protocol BKUIPearlEnrollControllerDelegate, NSObject;

@interface BKUIPearlEnrollController : PSViewController <BKUIPearlCoachingControllerDelegate, BKUIPearlEnrollViewControllerDelegate> {
    BOOL _systemRotationAnimating;
    long long _orientation;
}

@property (retain, nonatomic) BKUIPearlEnrollViewController *enrollViewController;
@property (retain, nonatomic) BKUIPearlCoachingController *coachingController;
@property (nonatomic) BOOL hasBeenPortrait;
@property (retain, nonatomic) id<NSObject> rotationChangeToken;
@property (retain, nonatomic) id<NSObject> rotationLockToken;
@property (readonly, nonatomic) UINavigationBar *navbarCopy;
@property (retain, nonatomic) BKUIOrientationStateHandler *orientationStateHandler;
@property (retain, nonatomic) BKUIPearlEnrollControllerPreloadedState *preloadState;
@property (weak, nonatomic) id<BKUIPearlEnrollControllerDelegate> delegate;
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) BOOL inSheet;
@property (nonatomic) unsigned long long enrollmentConfiguration;
@property (retain, nonatomic) BKIdentity *existingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadWithCompletion:(id /* block */)a0;
+ (BOOL)isDisplayZoomEnabled;
+ (BOOL)isPearlAvailable;
+ (BOOL)isPearlInterlocked;

- (void)_startObserving;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)containerView;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)isModalInPresentation;
- (id)navigationItem;
- (void)resetLayout;
- (void)deviceOrientationDidChange:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)coachingSkipped;
- (void)pearlEnrollControllerCompleted:(id)a0;
- (void)setCustomDetailString:(id)a0 forState:(int)a1;
- (void)_copyAndShowInternalNavBar;
- (void)_startInternalGlassesFlowAfterPreloadingNewVideoCaptureSession;
- (void)deviceOrientationChanged:(long long)a0;
- (void)deviceOrientationChanged:(long long)a0 duration:(double)a1;
- (void)diffSystemAndForcedRotationOrientations;
- (id)initWithPreloadedState:(id)a0;
- (void)pearlEnrollViewController:(id)a0 finishedEnrollWithError:(id)a1;
- (void)primeWithExternalizedAuthContext:(id)a0;
- (void)primeWithPasscode:(id)a0;
- (void)setCoachingHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setCoachingHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setCustomInstructionString:(id)a0 forState:(int)a1;
- (void)startInternalGlassesFlow;

@end
