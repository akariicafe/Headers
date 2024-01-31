@class SBDeviceApplicationSceneOverlayBasicWrapperView, UIViewController, UIView;
@protocol SBDeviceApplicationSceneOverlayView;

@interface SBDeviceApplicationSceneOverlayBasicWrapperViewController : UIViewController <SBDeviceApplicationSceneOverlayViewController> {
    UIViewController *_contentViewController;
    SBDeviceApplicationSceneOverlayBasicWrapperView *_contentWrapperView;
    BOOL _rendersWhileLocked;
    BOOL _needsCounterRotation;
}

@property (readonly, nonatomic) UIView<SBDeviceApplicationSceneOverlayView> *overlayView;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0 rendersWhileLocked:(BOOL)a1 needsCounterRotation:(BOOL)a2;

@end
