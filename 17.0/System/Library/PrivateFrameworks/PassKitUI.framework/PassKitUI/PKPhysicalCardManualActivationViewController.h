@class NSString, PKPhysicalCardActionController, PKPhysicalCard, CLLocationManager, CLInUseAssertion, PKBusinessChatController, PKOrderPhysicalCardHeroView, SFClient, PKPaymentPass;

@interface PKPhysicalCardManualActivationViewController : PKExplanationViewController <PKPhysicalCardActionControllerDelegate> {
    PKPhysicalCard *_physicalCard;
    PKPhysicalCardActionController *_actionController;
    PKPaymentPass *_paymentPass;
    unsigned long long _feature;
    NSString *_activationCode;
    PKOrderPhysicalCardHeroView *_hero;
    long long _state;
    CLInUseAssertion *_inUseAssertion;
    CLLocationManager *_locationManager;
    PKBusinessChatController *_businessChatController;
    BOOL _businessChatSupported;
    SFClient *_sharingClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_presentDisplayableError:(id)a0;
- (void)_setupForCurrentState;
- (void)_showSpinner:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithAccountService:(id)a0 account:(id)a1 accountUser:(id)a2 paymentPass:(id)a3 physicalCard:(id)a4 activationCode:(id)a5;
- (void)physicalCardActionController:(id)a0 didChangeToState:(long long)a1 withError:(id)a2;
- (id)presentationSceneIdentifierForPhysicalCardActionController:(id)a0;

@end
