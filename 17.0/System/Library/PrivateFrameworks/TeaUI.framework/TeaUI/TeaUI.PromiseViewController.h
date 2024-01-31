@class UIViewController;

@interface TeaUI.PromiseViewController : UIViewController {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ promise;
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ navigationItemStyle;
    void /* unknown type, empty encoding */ parentingCompleteClosure;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
