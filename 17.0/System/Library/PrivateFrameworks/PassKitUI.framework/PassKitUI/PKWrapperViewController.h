@class UIViewController;

@interface PKWrapperViewController : UIViewController {
    long long _type;
}

@property (readonly, nonatomic) UIViewController *wrappedViewController;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (long long)preferredUserInterfaceStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updatePreferredContentSize;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (id)initWithWrappedViewController:(id)a0 type:(long long)a1;

@end
