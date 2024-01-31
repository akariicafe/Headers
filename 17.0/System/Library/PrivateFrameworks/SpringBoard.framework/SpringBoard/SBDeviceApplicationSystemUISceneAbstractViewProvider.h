@class NSString, UIViewController;
@protocol SBScenePresentingDelegate, BSInvalidatable;

@interface SBDeviceApplicationSystemUISceneAbstractViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver, SBScenePresenting> {
    BOOL _isActive;
    long long _displayMode;
    UIViewController *_systemSceneUIViewController;
    id<BSInvalidatable> _systemUIScenePresenterAssertion;
    id<SBScenePresentingDelegate> _systemUIScenePresentingDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPresentingDelegate:(id)a0;
- (void)dealloc;
- (BOOL)wantsResignActiveAssertion;
- (void)_activateIfPossible;
- (void)noteDisplayModeChange:(long long)a0;
- (BOOL)affectsStatusBarPresentation;
- (BOOL)_isUnderUILock;
- (void).cxx_destruct;
- (void)_deactivateIfPossible;
- (id)_realOverlayViewController;
- (void)_acquireSystemUIScenePresentingAssertionIfNecessary;
- (void)_invalidateSystemUIScenePresentingAssertion;
- (id)acquireSystemUIScenePresentingAssertion;
- (id)dismissScene:(id)a0;
- (BOOL)isVisibleOnScreen;
- (id)parentSceneIdentityToken;
- (id)presentScene:(id)a0 viewControllerBuilderBlock:(id /* block */)a1;

@end
