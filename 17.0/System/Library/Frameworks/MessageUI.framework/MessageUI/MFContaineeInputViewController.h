@class UIViewController, NSLayoutConstraint;

@interface MFContaineeInputViewController : UIInputViewController

@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (nonatomic) BOOL allowsSelfSizing;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)_updateContentViewControllerHeight;
- (id)initWithContentViewController:(id)a0;

@end
