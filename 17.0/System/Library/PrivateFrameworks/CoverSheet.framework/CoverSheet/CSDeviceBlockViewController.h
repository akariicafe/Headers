@class ACAccountStore, NSString, CSDeviceUnblockViewController, CSDevicePasscodeRecoveryService, CSEraseDeviceAuthViewController, NSObject, ACAccount, CSLockScreenSettings, SBFDeviceBlockTimer;
@protocol OS_nw_path_monitor, OS_dispatch_queue, SBFBlockStatusProvider;

@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSModalViewDelegate, CSDeviceBlockViewDelegate, CSEraseDeviceAuthViewControllerDelegate> {
    id<SBFBlockStatusProvider> _blockStatusProvider;
    CSEraseDeviceAuthViewController *_authenticationViewController;
    CSDeviceUnblockViewController *_deviceUnblockViewController;
    CSDevicePasscodeRecoveryService *_passcodeRecovery;
    SBFDeviceBlockTimer *_blockTimer;
    CSLockScreenSettings *_lockScreenSettings;
    id /* block */ _pendingAction;
    NSObject<OS_dispatch_queue> *_accountAccessQueue;
    ACAccountStore *_accountStore;
    ACAccount *_findMyAccount;
    BOOL _attemptingErase;
    BOOL _attemptingRecovery;
    BOOL _hasActiveInternetConnection;
    BOOL _shouldEraseDataPlan;
}

@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *networkMonitorQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (long long)presentationPriority;
- (void)_updateText;
- (void)dealloc;
- (id)view;
- (void)viewDidLoad;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)aggregateBehavior:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)viewIfLoaded;
- (id)initWithDeviceBlockStatusProvider:(id)a0;
- (void)cancelButtonTapped;
- (BOOL)_isFindMyEnabled;
- (void)_attemptRecovery;
- (void)_cancelPendingActionAfterDelay:(double)a0;
- (void)_attemptErase;
- (void)_attemptToDisableFindMyWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)_disableFindMyInContext:(unsigned long long)a0 withWipeToken:(id)a1 completion:(id /* block */)a2;
- (void)_eraseDeviceWithCompletion:(id /* block */)a0;
- (void)_getUserAccountWithCompletion:(id /* block */)a0;
- (void)_handleDeviceLocatorStateDidChange:(id)a0;
- (BOOL)_isFindMyChangingState;
- (id)_obfuscateUsername:(id)a0;
- (void)_performFMIPAuthenticationForContext:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)_presentAuthenticationViewController;
- (void)_presentUnblockDeviceViewController;
- (void)_setNetworkMonitorUpdateHandlerWithPath:(id)a0 completion:(id /* block */)a1;
- (void)_setUpNetworkPathMonitor;
- (BOOL)_shouldShowUnblockDeviceButton;
- (id)_unblockPolicy;
- (void)authViewController:(id)a0 didConfirmEraseAfterAuthenticationWithResults:(id)a1 shouldEraseDataPlan:(BOOL)a2;
- (void)authViewControllerDidCancelToEraseDeviceAfterAuthentication:(id)a0;
- (void)deviceUnblockViewModelHandleDidRequestCancel;
- (void)deviceUnblockViewModelHandleDidRequestErase;
- (void)deviceUnblockViewModelHandleDidRequestRecovery;
- (void)handleEmergencyButtonAction;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;
- (void)handleUnblockButtonAction;

@end
