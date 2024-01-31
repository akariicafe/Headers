@class UIColor, UIViewController;

@interface _TVModalPageBezelViewController : UIViewController

@property (nonatomic) double bezelCornerRadius;
@property (retain, nonatomic) UIColor *bezelBackgroundColor;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
