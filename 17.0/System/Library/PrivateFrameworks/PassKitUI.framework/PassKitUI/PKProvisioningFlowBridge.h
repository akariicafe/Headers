@interface PKProvisioningFlowBridge : NSObject

+ (void)startInAppFlowWithNavController:(id)a0 context:(id)a1 addPassConfiguration:(id)a2 completion:(id /* block */)a3;
+ (void)startInAppFlowWithNavController:(id)a0 context:(id)a1 requestConfiguration:(id)a2 phoneWebService:(id)a3 watchWebService:(id)a4 generateRequest:(id /* block */)a5 onViewLoaded:(id /* block */)a6 completion:(id /* block */)a7;
+ (void)startManualEntryFlowWithNavController:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)startPaymentSetupFlowWithNavController:(id)a0 context:(id)a1 mode:(long long)a2 preflightCompletion:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)startProductManualEntryFlowWithNavController:(id)a0 context:(id)a1 product:(id)a2 presentNavController:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)startProvisionToPurchaseFlowWithNavController:(id)a0 context:(id)a1 onFirstViewControllerShown:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)startSetupAssistantFlowWithContext:(id)a0 allowManualEntry:(BOOL)a1 onFirstViewControllerShown:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)startSetupAssistantFlowWithContext:(id)a0 credentials:(id)a1 onFirstViewControllerShown:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)startSetupAssistantFollowupFlowWithNavController:(id)a0 context:(id)a1 preflightCompletion:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)startShareRedemptionFlowWithNavController:(id)a0 context:(id)a1 invitation:(id)a2 referralSource:(id)a3 completion:(id /* block */)a4;
+ (void)startShareableCredentialFlowWithNavController:(id)a0 context:(id)a1 credentials:(id)a2 completion:(id /* block */)a3;
+ (void)startVerificationFlowWithNavController:(id)a0 context:(id)a1 pass:(id)a2 verificationController:(id)a3 presentNavController:(id /* block */)a4;

- (id)init;

@end
