@class NSString, OBLinkTrayButton, SSOBBoldTrayButton;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanCrossPlatformViewController : TSOBWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem> {
    SSOBBoldTrayButton *_continueButton;
    OBLinkTrayButton *_scanButton;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property BOOL isScanButtonTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0;
- (void)_continueButtonTapped;
- (void)_scanButtonTapped;
- (long long)backOption;

@end
