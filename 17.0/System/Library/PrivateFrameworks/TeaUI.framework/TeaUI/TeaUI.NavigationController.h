@interface TeaUI.NavigationController : TUNavigationController {
    void /* unknown type, empty encoding */ styler;
}

@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredLeadingStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredCenterStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredTrailingStatusBarStyle;

- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (id)initWithRootViewController:(id)a0 navigationBarClass:(Class)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
