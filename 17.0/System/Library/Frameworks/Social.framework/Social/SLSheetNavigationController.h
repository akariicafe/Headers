@interface SLSheetNavigationController : UINavigationController

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (void)setDefaultNavigationBarStyle;
- (void)setSheetNavigationBarStyle;

@end
