@class NSString, CTPlan, NSDictionary, CoreTelephonyClient, TSBuddyMLController;

@interface TSCarrierSignupFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSEntitlementJSHandlerDelegate> {
    CoreTelephonyClient *_client;
    CTPlan *_plan;
    NSDictionary *_postdata;
    TSBuddyMLController *_buddyMLController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewControllerDidComplete:(id)a0;
- (id)initWithPlan:(id)a0;
- (void)showFirstViewControllerWithHostController:(id)a0 completion:(id /* block */)a1;
- (id)_handleCarrierInfoWithUrl:(id)a0 postdata:(id)a1 type:(id)a2 error:(id)a3;
- (void)didPurchasePlanSuccessfullyWithCarrier:(id)a0 mnc:(id)a1 gid1:(id)a2 gid2:(id)a3 state:(id)a4;
- (void)didPurchasePlanSuccessfullyWithEid:(id)a0 imei:(id)a1 meid:(id)a2 iccid:(id)a3 alternateSDMP:(id)a4 state:(id)a5;
- (id)nextViewControllerFrom:(id)a0;

@end
