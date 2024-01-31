@interface VideosUI.SportsFavoritesOnboardingViewController : UIViewController {
    void /* unknown type, empty encoding */ dismissHandler;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controller;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ confirmationButton;
    void /* unknown type, empty encoding */ deferButton;
    void /* unknown type, empty encoding */ lastRecordedPageEventData;
}

- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)doConfirmationAction;
- (void)doDeferAction;

@end
