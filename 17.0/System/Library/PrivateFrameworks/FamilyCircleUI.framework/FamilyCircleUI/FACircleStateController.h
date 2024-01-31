@class FARequestConfigurator, NSString, RUIStyle, UIViewController;

@interface FACircleStateController : NSObject <FARemoteViewControllerDelegate, FACirclePresenterDelegate> {
    FARequestConfigurator *_requestConfigurator;
    id /* block */ _performOperationCompletion;
    id /* block */ _circlePresenterFactory;
}

@property (weak, nonatomic) UIViewController *presenter;
@property (copy, nonatomic) id /* block */ presentationHandler;
@property (nonatomic) unsigned long long presentationType;
@property (retain, nonatomic) RUIStyle *customRUIStyle;
@property (nonatomic) long long modalPresentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithPresenter:(id)a0;
- (void).cxx_destruct;
- (void)performWithContext:(id)a0 completion:(id /* block */)a1;
- (void)performOperationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_ensurePresenterWithCompletion:(id /* block */)a0;
- (BOOL)_contextRequiresRemoteService:(id)a0;
- (void)_performOperationWithContext:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (void)_presentFlowUsingSpringBoardWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_presentPlatformUnsupportedAlertWithCompletion:(id /* block */)a0;
- (void)_presentViewServiceWithContext:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (BOOL)_processRequiresSpringBoardServices;
- (id)_whitelistedInProcessClients;
- (void)circlePresenterDidPresent:(id)a0;
- (id)initWithRequestConfigurator:(id)a0 presenter:(id)a1 circlePresenterFactory:(id /* block */)a2;
- (void)remoteViewControllerDidStartFlow:(id)a0;

@end
