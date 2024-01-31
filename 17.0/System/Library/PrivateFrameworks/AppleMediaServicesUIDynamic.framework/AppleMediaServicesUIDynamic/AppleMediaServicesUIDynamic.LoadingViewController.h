@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.LoadingViewController : AMSUICommonViewController {
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
