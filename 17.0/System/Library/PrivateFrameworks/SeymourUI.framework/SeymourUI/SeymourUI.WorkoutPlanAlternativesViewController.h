@interface SeymourUI.WorkoutPlanAlternativesViewController : UIViewController {
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ platform;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)onCloseButtonTapped:(id)a0;

@end
