@class AMSUILoadingView;

@interface AMSUICommonLoadingViewController : AMSUICommonViewController

@property (retain, nonatomic) AMSUILoadingView *loadingView;

- (void)_setup;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;

@end
