@class NSError, NSString, CoreTelephonyClient, NSDictionary, CTDisplayPlanList, NSMutableArray, NSObject, UIBarButtonItem;
@protocol OS_dispatch_group;

@interface TSActivationFlowWithSimSetupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate, TSEntitlementJSHandlerDelegate> {
    BOOL _confirmationCodeRequired;
    BOOL _isTransferCapable;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapabilityLoss;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSMutableArray *_transferItems;
    CTDisplayPlanList *_pendingInstallPlans;
    CTDisplayPlanList *_carrierSetupItems;
    CTDisplayPlanList *_crossPlatformTransferItems;
    NSString *_name;
    NSString *_carrierSetupUrl;
    NSDictionary *_carrierSetupPostData;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    CoreTelephonyClient *_client;
    long long _signupConsentResponse;
    NSObject<OS_dispatch_group> *_queryGroup;
}

@property BOOL isPreinstallingViewControllerActive;
@property BOOL requireSetup;
@property (retain) id transferBackPlan;
@property (retain) NSString *transferBackPlanPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (void)planItemsUpdated:(id)a0 planListError:(id)a1;
- (id)_createFirstViewController:(id)a0;
- (void)_filterCarrierSetupItems:(id)a0;
- (void)_maybeShowPreinstallConsentOnViewController:(id)a0 planItems:(id)a1;
- (void)_requestCarrierSetupsWithCompletion:(id /* block */)a0;
- (void)_requestCrossPlatformTransferPlanListWithCompletion:(id /* block */)a0;
- (void)_requestPendingInstallItemsWithCompletion:(id /* block */)a0;
- (void)_requestPlansWithCompletion:(id /* block */)a0;
- (void)_requestTransferPlanListWithCompletion:(id /* block */)a0;
- (void)_sendSIMSetupReadyNotification;
- (void)_userDidTapCancel;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)didPurchasePlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 alternateSDMP:(id)a4 state:(id)a5;
- (void)didTransferPlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 srcIccid:(id)a4 alternateSDMP:(id)a5 state:(id)a6;
- (void)getWebsheetInfo:(id)a0 completion:(id /* block */)a1;
- (id)initRequireSetup:(BOOL)a0 transferBackPlan:(id)a1;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (long long)signupUserConsentResponse;
- (void)startOverWithFirstViewController:(id /* block */)a0;

@end
