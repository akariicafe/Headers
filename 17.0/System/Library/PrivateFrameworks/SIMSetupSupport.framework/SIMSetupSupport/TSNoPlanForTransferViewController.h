@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSNoPlanForTransferViewController : TSOBTableWelcomeController <UINavigationControllerDelegate, TSSetupFlowItem> {
    BOOL _showOtherOptions;
}

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property unsigned long long entryPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTitleAndDetailsForTransferCapability:(unsigned long long)a0 carrier:(id)a1 phoneNumber:(id)a2 sourceDeviceName:(id)a3 isTransferNotSupportedFromiPhone:(BOOL)a4 isTransferBackPlan:(BOOL)a5;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_cancelButtonTapped;
- (void)_scanButtonTapped;
- (id)initWithCarrier:(id)a0 phoneNumber:(id)a1 transferCapability:(unsigned long long)a2 showOtherOptions:(BOOL)a3 entryPoint:(unsigned long long)a4 sourceDeviceName:(id)a5 isTransferNotSupportedFromiPhone:(BOOL)a6 isTransferBackPlan:(BOOL)a7;
- (BOOL)isStartOverRequiredOnBackButtonTapped;

@end
