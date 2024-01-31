@interface SeymourUI.WorkoutPlanScheduleViewController : UIViewController {
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ upNextQueueButton;
    void /* unknown type, empty encoding */ upNextQueueButtonPresenter;
    void /* unknown type, empty encoding */ workoutPlanStringBuilder;
    void /* unknown type, empty encoding */ calendarCoordinator;
    void /* unknown type, empty encoding */ hostedContentCoordinator;
    void /* unknown type, empty encoding */ navigationTitleView;
    void /* unknown type, empty encoding */ isViewTransitioningToSize;
    void /* unknown type, empty encoding */ latestContentSize;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)backButtonPressed;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
