@interface TeaUI.CardNavigationController : TeaUI.NavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ commandCenter;
}

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)initWithRootViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithRootViewController:(id)a0 navigationBarClass:(Class)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
