@interface SeymourUI.AccountViewController : UIViewController {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ metricPage;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ storefrontLocalizer;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
