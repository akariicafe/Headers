@interface UIApplicationRotationFollowingControllerNoTouches : UIApplicationRotationFollowingController

- (void)loadView;
- (void)_rotateToOrientation:(long long)a0 duration:(double)a1;
- (void)_prepareForRotationToOrientation:(long long)a0 duration:(double)a1;
- (void)_finishRotationFromInterfaceOrientation:(long long)a0;

@end
