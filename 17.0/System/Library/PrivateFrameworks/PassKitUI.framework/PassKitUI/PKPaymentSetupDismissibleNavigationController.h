@protocol PKUIFlowManagerRendererDelegate;

@interface PKPaymentSetupDismissibleNavigationController : PKNavigationController {
    BOOL _configureRootViewController;
}

@property (weak, nonatomic) id<PKUIFlowManagerRendererDelegate> flowDelegate;
@property (readonly, nonatomic) long long context;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (id)initWithContext:(long long)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)_configureRootViewController;
- (void)useStandardPlatformPresentationStyle;

@end
