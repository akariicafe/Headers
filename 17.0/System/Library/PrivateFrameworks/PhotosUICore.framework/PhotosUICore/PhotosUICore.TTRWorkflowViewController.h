@interface PhotosUICore.TTRWorkflowViewController : UINavigationController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ completion;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
