@interface SeymourUI.WorkoutPlanPreferencesViewController : UIViewController {
    void /* unknown type, empty encoding */ primaryActionButton;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ preferenceType;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ workoutPlanStringBuilder;
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
- (void)onCancelButtonTapped:(id)a0;
- (void)onUpdateButtonTapped:(id)a0;

@end
