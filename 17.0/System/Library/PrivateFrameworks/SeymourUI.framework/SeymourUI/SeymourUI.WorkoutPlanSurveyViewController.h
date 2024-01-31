@interface SeymourUI.WorkoutPlanSurveyViewController : UIViewController {
    void /* unknown type, empty encoding */ currentContentInsetBehavior;
    void /* unknown type, empty encoding */ isTransitioningContentInset;
    void /* unknown type, empty encoding */ magicPocketView;
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ contentInsetInitialBehavior;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ scrollObserver;
    void /* unknown type, empty encoding */ actionPresenter;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)onCancelButtonTapped:(id)a0;

@end
