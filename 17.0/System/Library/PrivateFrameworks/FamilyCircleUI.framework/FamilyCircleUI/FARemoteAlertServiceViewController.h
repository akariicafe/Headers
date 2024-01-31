@class FACircleContext, NSXPCConnection;
@protocol FAFamilyPresenterHostProtocol;

@interface FARemoteAlertServiceViewController : SBUIRemoteAlertServiceViewController {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
}

@property (retain, nonatomic) id<FAFamilyPresenterHostProtocol> hostProxy;

- (id)_account;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleButtonActions:(id)a0;
- (void)_dismissAndExit;
- (void)_showFamilyFlow;
- (void)_handleSignedOutAcceptInvitation;
- (void)_invalidateLookupConnection;
- (void)_main_dismissAndExit;
- (void)_setupRemoteProxy;

@end
