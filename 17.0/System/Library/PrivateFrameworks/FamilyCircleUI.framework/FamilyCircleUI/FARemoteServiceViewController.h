@class NSString, FACircleContext, NSXPCConnection;

@interface FARemoteServiceViewController : UIViewController <FARemoteServiceProtocol, RUIPresentationHandling> {
    FACircleContext *_circleContext;
    NSXPCConnection *_lookupConnection;
    BOOL _isFlowStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dealloc;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_showLoadingView;
- (void)dismissModalRUIController:(id)a0 completion:(id /* block */)a1;
- (void)presentModalRUIController:(id)a0 completion:(id /* block */)a1;
- (void)replaceModalRUIController:(id)a0 byController:(id)a1 completion:(id /* block */)a2;
- (void)ruiDidDismissAlertController:(id)a0;
- (void)ruiPresentAlertController:(id)a0;
- (void)_dismissAndExit;
- (void)_showFamilyFlow;
- (void)_main_dismissAndExit;
- (void)_presentAsChildViewController:(id)a0;
- (void)_removeChildViewControllers;
- (void)startFlowWithContext:(id)a0;

@end
