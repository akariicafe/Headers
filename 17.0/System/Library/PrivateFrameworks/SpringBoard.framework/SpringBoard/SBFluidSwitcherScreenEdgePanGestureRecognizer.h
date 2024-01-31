@class SBFluidSwitcherViewController;

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {
    long long _touchInterfaceOrientationWhenGestureBegan;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;

- (void)reset;
- (long long)_touchInterfaceOrientation;
- (id)viewForTouchHistory;
- (void)setState:(long long)a0;
- (void).cxx_destruct;

@end
