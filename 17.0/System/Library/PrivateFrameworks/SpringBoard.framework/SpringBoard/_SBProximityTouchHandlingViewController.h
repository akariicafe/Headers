@class SBProximitySettings;

@interface _SBProximityTouchHandlingViewController : UIViewController {
    double _statusBarHeight;
    SBProximitySettings *_proximitySettings;
}

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (id)_view;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
