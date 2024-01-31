@class UIWindow;

@interface MCAlertController : UIAlertController

@property (retain, nonatomic) UIWindow *alertWindow;
@property (copy, nonatomic) id /* block */ viewWillAppearHandler;
@property (copy, nonatomic) id /* block */ viewDidDisappearHandler;

- (void)dismiss;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)show;
- (void)viewDidDisappear:(BOOL)a0;

@end
