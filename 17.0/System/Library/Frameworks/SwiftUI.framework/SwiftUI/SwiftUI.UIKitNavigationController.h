@interface SwiftUI.UIKitNavigationController : UINavigationController {
    void /* unknown type, empty encoding */ update;
    void /* unknown type, empty encoding */ isTransitioningToSize;
    void /* unknown type, empty encoding */ backgroundHost;
}

+ (BOOL)_isFromSwiftUI;

- (id)initWithRootViewController:(id)a0;
- (void)_observeScrollViewDidScroll:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)_observeScrollViewGeometryAffectingContentBottomDidChange:(id)a0;

@end
