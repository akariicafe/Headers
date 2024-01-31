@interface BCConfigurationViewController : ActionButtonConfigurationUI.ScreenViewModelTrackingViewController <ABActionSelectorViewControllerDelegate> {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ dismissHandler;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ selectorViewController;
    void /* unknown type, empty encoding */ welcomeView;
    void /* unknown type, empty encoding */ actionDetailsView;
    void /* unknown type, empty encoding */ sceneParameterOverrides;
    void /* unknown type, empty encoding */ cancellableBag;
    void /* unknown type, empty encoding */ shortcutConfigurationViewController;
    void /* unknown type, empty encoding */ originalNavigationBarTintColor;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)actionSelectorViewController:(id)a0 didUpdateMode:(long long)a1;
- (void)actionSelectorViewController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)didTapSelectorView;

@end
