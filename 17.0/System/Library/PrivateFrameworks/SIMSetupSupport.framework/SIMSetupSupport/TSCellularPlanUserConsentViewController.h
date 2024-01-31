@class NSArray, NSString, SSOBBoldTrayButton, UIView, SSSpinner;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUserConsentViewController : TSOBWelcomeController <SSSpinnerProtocol, TSSetupFlowItem> {
    BOOL _didReceiveResponse;
    NSString *_confirmationCode;
    BOOL _requireAdditionalConsent;
}

@property (retain) SSOBBoldTrayButton *acceptButton;
@property (readonly, nonatomic) unsigned long long consentType;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL animating;
@property (retain) NSArray *cachedButtons;
@property (retain) SSSpinner *spinner;
@property (retain) UIView *spinnerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)calculateTitleAndDetailsWithName:(id)a0 consentType:(unsigned long long)a1 title:(id *)a2 details:(id *)a3;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)canBeShownFromSuspendedState;
- (void)_cancelButtonTapped;
- (void)_acceptButtonTapped;
- (void)_declineButtonTapped;
- (void)_setNavigationItems;
- (BOOL)customizeSpinner;
- (id)initWithConfirmationCode:(id)a0 consentType:(unsigned long long)a1 requireAdditionalConsent:(BOOL)a2 confirmationCode:(id)a3;
- (id)initWithName:(id)a0 consentType:(unsigned long long)a1 requireAdditionalConsent:(BOOL)a2;

@end
