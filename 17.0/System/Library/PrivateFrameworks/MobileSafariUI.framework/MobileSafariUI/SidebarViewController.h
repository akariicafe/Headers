@class UIViewController, UIView;

@interface SidebarViewController : UIViewController {
    UIView *_verticalSeparator;
}

@property (readonly, nonatomic) double separatorWidth;
@property (retain, nonatomic) UIViewController *contentViewController;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
