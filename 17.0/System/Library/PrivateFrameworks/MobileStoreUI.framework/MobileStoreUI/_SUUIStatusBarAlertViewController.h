@class NSString, UILabel, UIView;
@protocol _SUUIStatusBarAlertViewControllerDelegate;

@interface _SUUIStatusBarAlertViewController : UIViewController {
    UILabel *_label;
}

@property (readonly, nonatomic) UIView *statusBarView;
@property (nonatomic) long long style;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (weak, nonatomic) id<_SUUIStatusBarAlertViewControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long defaultInterfaceOrientations;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)updateLabelFrame;
- (void)handleLabelTap:(id)a0;
- (void)endAllAnimations;

@end
