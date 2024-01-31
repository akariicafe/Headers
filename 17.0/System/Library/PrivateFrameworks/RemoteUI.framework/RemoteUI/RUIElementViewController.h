@protocol RUITopLevelPageElement;

@interface RUIElementViewController : UIViewController

@property (readonly, nonatomic) id<RUITopLevelPageElement> element;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setUpViews;
- (id)initWithElement:(id)a0;

@end
