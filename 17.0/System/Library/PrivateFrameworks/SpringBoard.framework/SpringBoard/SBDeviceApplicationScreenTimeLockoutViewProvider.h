@class NSString, STBlockingViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider <SBDeviceApplicationSceneHandleObserver> {
    STBlockingViewController *_blockingViewController;
    BOOL _waitingForPrivacyPreflight;
    BOOL _isActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleInstalledAppsChanged:(id)a0;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)dealloc;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (void)_activateIfPossible;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (long long)priority;
- (void)_deactivateIfPossibleRespectingAppBlockedState:(BOOL)a0;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_blockingViewControllerDismissedItself;
- (id)_newBlockingViewControllerWithBundleIdentifier:(id)a0;
- (id)_realOverlayViewController;

@end
