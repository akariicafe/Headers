@interface ActionButtonConfigurationUI.ScreenViewModelTrackingViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ viewModel;
}

- (void)presentationControllerWillDismiss:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;

@end
