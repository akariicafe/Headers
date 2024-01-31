@class SBDeviceApplicationRemoteTransientOverlayViewProvider;

@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController {
    SBDeviceApplicationRemoteTransientOverlayViewProvider *_viewProvider;
}

- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithViewProvider:(id)a0;

@end
