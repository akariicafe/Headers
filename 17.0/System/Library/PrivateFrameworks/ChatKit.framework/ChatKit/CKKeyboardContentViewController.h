@class NSString, UIViewController;

@interface CKKeyboardContentViewController : UIInputViewController

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIViewController *viewController;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithViewController:(id)a0 identifier:(id)a1;

@end
