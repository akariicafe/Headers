@class UIViewController;

@interface TeaUI.LazyViewController : UIViewController {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ _loadedViewController;
    void /* unknown type, empty encoding */ eventManager;
}

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
