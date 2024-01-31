@class NSString, CoreTelephonyClient, TSRemotePlanWebsheetContext;

@interface TSRemotePlanSignUpFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate> {
    CoreTelephonyClient *_client;
}

@property (retain) TSRemotePlanWebsheetContext *remotePlanWebsheetContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)appBackgrounded;
- (void)firstViewController:(id /* block */)a0;
- (void)appForegrounded;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)didPurchasePlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 alternateSDMP:(id)a4 state:(id)a5;
- (void)didTransferPlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 srcIccid:(id)a4 alternateSDMP:(id)a5 state:(id)a6;
- (id)initWithRemotePlanWebsheetContext:(id)a0;
- (id)nextViewControllerFrom:(id)a0;

@end
