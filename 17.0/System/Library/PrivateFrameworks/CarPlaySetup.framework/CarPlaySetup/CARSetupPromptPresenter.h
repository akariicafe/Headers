@class UINavigationController, CARSetupPromptDirector, NSString, UIViewController;

@interface CARSetupPromptPresenter : NSObject <CARSetupPromptPresenting, PRXFlowDelegate>

@property (readonly, nonatomic) CARSetupPromptDirector *promptDirector;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentingViewController:(id)a0;
- (void).cxx_destruct;
- (void)proxCardFlowDidDismiss;
- (void)proxCardFlowWillPresent;
- (void)_presentPromptViewController:(id)a0;
- (void)promptDirector:(id)a0 wantsToPresentAllowWhileLockedPromptForVehicleName:(id)a1 responseHandler:(id /* block */)a2;
- (void)promptDirector:(id)a0 wantsToPresentConnectPromptWithResponseHandler:(id /* block */)a1;
- (void)promptDirector:(id)a0 wantsToPresentEnhancedIntegrationPromptForVehicleName:(id)a1 responseHandler:(id /* block */)a2;
- (void)promptDirector:(id)a0 wantsToPresentUseWirelessPromptWithResponseHandler:(id /* block */)a1;

@end
