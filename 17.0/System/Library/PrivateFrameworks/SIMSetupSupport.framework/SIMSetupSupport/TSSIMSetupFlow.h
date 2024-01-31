@class UINavigationController, NSMutableDictionary, NSString, UIViewController;
@protocol TSSIMSetupDelegate, TSSetupFlowItem;

@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate, UIAdaptivePresentationControllerDelegate>

@property (weak) TSSIMSetupFlow *parentFlow;
@property (weak) UINavigationController *navigationController;
@property (weak) UIViewController<TSSetupFlowItem> *topViewController;
@property (weak) UIViewController *dismissingViewController;
@property (weak) UIViewController<TSSetupFlowItem> *nextViewController;
@property (retain) UIViewController *firstViewControllerInstance;
@property BOOL isFlowFinished;
@property (retain) NSMutableDictionary *backOptions;
@property (weak) id<TSSIMSetupDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithOptions:(id)a0;
+ (id)flowWithOptions:(id)a0;
+ (id)initActivationCodeRequireSetup:(BOOL)a0;
+ (void)bootstrapTransferFlowWithSession:(id)a0 transferablePlanOnSource:(BOOL)a1;
+ (id)createTSRemotePlanWebsheetContext:(id)a0;
+ (id)initWithActivationCodeOnlyFlow;
+ (id)initWithAppName:(id)a0 requireSetup:(BOOL)a1;
+ (id)initWithAppName:(id)a0 requireSetup:(BOOL)a1 skipGeneralInstallConsent:(BOOL)a2;
+ (id)initWithSetupFlowWithIccid:(id)a0 showAddPlan:(BOOL)a1;
+ (id)initWithSetupFlowWithIccid:(id)a0 showAddPlan:(BOOL)a1 forceDualSIMSetup:(BOOL)a2;
+ (void)needsToRun:(id /* block */)a0;
+ (void)needsToRunUsingMessageSession:(id)a0 completion:(id /* block */)a1;
+ (void)needsToRunUsingMessageSession:(id)a0 transferablePlanOnSource:(BOOL)a1 completion:(id /* block */)a2;

- (id)init;
- (id)rootViewController;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (void)appBackgrounded;
- (void)firstViewController:(id /* block */)a0;
- (void)receivedResponse;
- (void)showFirstViewControllerWithHostController:(id)a0 completion:(id /* block */)a1;
- (void)waitForResponse:(id)a0;
- (void)appForegrounded;
- (void)_maybeClearSubFlow;
- (BOOL)_needCustomizeBackAction:(id)a0;
- (void)_notifyFlowCompletion:(unsigned long long)a0;
- (void)_popAllSIMSetupFlowViewControllers:(id)a0;
- (void)_pushStartOverViewController:(id)a0 from:(id)a1;
- (BOOL)_startOver:(id)a0;
- (void)attemptFailed;
- (void)cancelNextPane;
- (void)maybeRegisterDismissHandler:(id)a0;
- (void)navigateToNextPaneFrom:(id)a0 navigationController:(id)a1;
- (id)nextViewControllerFrom:(id)a0;
- (void)receivedResponseWithVC:(id)a0;
- (void)restartWith:(id)a0;
- (void)showLoadFailureAlert:(id)a0;
- (void)startOverWithFirstViewController:(id /* block */)a0;
- (void)userDidTapCancel;

@end
