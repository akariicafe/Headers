@protocol NCModalNavigationControllerDelegate;

@interface NCModalNavigationController : UINavigationController

@property (weak, nonatomic) id<NCModalNavigationControllerDelegate> presenterDelegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;

@end
