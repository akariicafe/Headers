@class UIViewController;

@interface SUUIBackdropContentViewController : UIViewController

@property (nonatomic) long long backdropViewPrivateStyle;
@property (retain, nonatomic) UIViewController *contentViewController;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithContentViewController:(id)a0;

@end
