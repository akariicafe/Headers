@interface SeymourUI.WorkoutPlanCompletionViewController : UIViewController {
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ metricPage;
    void /* unknown type, empty encoding */ styleProvider;
    void /* unknown type, empty encoding */ workoutPlanStringBuilder;
    void /* unknown type, empty encoding */ showActionButtons;
    void /* unknown type, empty encoding */ showRepeatButton;
    void /* unknown type, empty encoding */ medalContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_metricsContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollingStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_medalStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonContentContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textStackContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headlineLabel;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_repeatButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_buttonStack;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)doneButtonPressed;
- (void)repeatButtonPressed;

@end
