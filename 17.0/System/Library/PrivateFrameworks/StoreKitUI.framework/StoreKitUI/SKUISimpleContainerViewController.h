@class UIViewController;

@interface SKUISimpleContainerViewController : UIViewController

@property (retain, nonatomic) UIViewController *contentViewController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)loadView;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;

@end
