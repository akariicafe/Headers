@interface ContactlessReaderUI.RegRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    void /* unknown type, empty encoding */ regViewController;
    void /* unknown type, empty encoding */ viewDisappearListener;
    void /* unknown type, empty encoding */ suppressible;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;

@end
