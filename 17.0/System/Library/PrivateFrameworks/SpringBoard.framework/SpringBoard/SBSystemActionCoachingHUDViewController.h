@class UIView, NSString, SBFlashlightActivityManager, NSArray, SBRingerControl, SBDoNotDisturbStateMonitor, SBSystemAction, SBApplicationController, SBSystemActionCoachingSettings, BLSAssertion, UILabel;
@protocol SBSystemActionCoachingHUDViewControllerDelegate;

@interface SBSystemActionCoachingHUDViewController : SBOrientationTransformWrapperViewController <UIViewControllerTransitioningDelegate, SBHUDViewControlling> {
    BOOL _rotating;
    BOOL _coachingLabelTextNeedsUpdate;
    id<SBSystemActionCoachingHUDViewControllerDelegate> _delegate;
    SBSystemAction *_action;
    long long _state;
    SBRingerControl *_ringerControl;
    SBApplicationController *_applicationController;
    SBDoNotDisturbStateMonitor *_doNotDisturbStateMonitor;
    SBFlashlightActivityManager *_flashlightActivityManager;
    SBSystemActionCoachingSettings *_settings;
    BLSAssertion *_liveRenderingAssertion;
    unsigned long long _stateTransitionAnimationCount;
    long long _coachingLabelOrientation;
    UIView *_contentView;
    UIView *_dimmingView;
    UIView *_coachingButton;
    UIView *_coachingLabelWrapperView;
    UILabel *_coachingLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *physicalButtonSceneTargets;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (BOOL)definesAnimatedDismissal;
- (void)dismissAnimatedWithCompletion:(id /* block */)a0;

@end
