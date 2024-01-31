@class _EXHostViewController;

@interface EXAppExtensionBrowserViewController : UIViewController

@property (readonly) _EXHostViewController *hostViewController;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)beginHosting;

@end
