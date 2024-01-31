@interface SeymourUI.NavigationViewController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ menuGestureRecognizer;
    void /* unknown type, empty encoding */ onShouldBeginRecognizing;
    void /* unknown type, empty encoding */ onMenuTapped;
    void /* unknown type, empty encoding */ viewControllerAppearanceCompletion;
}

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)menuButtonTapped;

@end
