@class SBIsolatedSceneOrientationFollowingWrapperViewController, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneOverlayBasicWrapperViewController, UIViewController;
@protocol SBDeviceApplicationSceneOverlayViewController, SBDeviceApplicationSceneOverlayViewProviderDelegate;

@interface SBDeviceApplicationSceneOverlayViewProvider : NSObject {
    SBIsolatedSceneOrientationFollowingWrapperViewController *_orientationWrapperViewController;
    SBDeviceApplicationSceneOverlayBasicWrapperViewController *_basicWrapperViewController;
}

@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, weak, nonatomic) id<SBDeviceApplicationSceneOverlayViewProviderDelegate> delegate;
@property (readonly, nonatomic) UIViewController<SBDeviceApplicationSceneOverlayViewController> *overlayViewController;
@property (readonly, nonatomic) BOOL affectsStatusBarPresentation;
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (readonly, nonatomic) BOOL wantsResignActiveAssertion;
@property (readonly, nonatomic) BOOL contentWantsTraitsArbiterBasedRotation;
@property (readonly, nonatomic) long long priority;

- (long long)preferredInterfaceOrientationForPresentation;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)a0;
- (void)dealloc;
- (BOOL)shouldFollowSceneOrientation;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (void)_activateIfPossible;
- (void)containerDidUpdateTraitsParticipant:(id)a0;
- (void)noteDisplayModeChange:(long long)a0;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initialTraitsParticipantForOverlayContainer;
- (unsigned long long)supportedInterfaceOrientations;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_deactivateIfPossible;
- (id)_realOverlayViewController;

@end
