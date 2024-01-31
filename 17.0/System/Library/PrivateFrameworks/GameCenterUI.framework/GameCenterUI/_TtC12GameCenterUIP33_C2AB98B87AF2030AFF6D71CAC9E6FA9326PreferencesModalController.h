@interface _TtC12GameCenterUIP33_C2AB98B87AF2030AFF6D71CAC9E6FA9326PreferencesModalController : UINavigationController <UINavigationControllerDelegate>

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)didTapDone;

@end
