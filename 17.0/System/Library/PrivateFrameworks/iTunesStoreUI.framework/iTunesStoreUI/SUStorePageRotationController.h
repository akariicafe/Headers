@class SURotationController, SUViewController;

@interface SUStorePageRotationController : SURotationController {
    SURotationController *_childRotationController;
    SUViewController *_childViewController;
}

- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)a0;
- (id)_childRotationController;
- (void)animateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)prepareToRotateToInterfaceOrientation:(long long)a0;

@end
