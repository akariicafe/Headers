@class UIViewController, NSObject;

@interface VUIHUDViewController : UIViewController

@property (retain, nonatomic) NSObject *tabObserver;
@property (retain, nonatomic) UIViewController *hudContentViewController;
@property (nonatomic) int tabIndex;
@property (nonatomic) struct CGSize { double width; double height; } playerViewSize;

- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_addViewControllerToHud;
- (struct CGSize { double x0; double x1; })_computePreferredContentSize;

@end
