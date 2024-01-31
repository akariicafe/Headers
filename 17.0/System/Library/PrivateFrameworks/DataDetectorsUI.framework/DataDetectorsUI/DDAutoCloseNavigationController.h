@class DDFlightAction;

@interface DDAutoCloseNavigationController : UINavigationController

@property (weak) DDFlightAction *target;

- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)closePressed;

@end
