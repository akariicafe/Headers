@class NSString, CoreTelephonyClient;
@protocol ESIMProxTransferControllerDelegate;

@interface TSCellularPlanProximityTransferController : NSObject <CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupFlowDelegate>

@property (weak, nonatomic) id<ESIMProxTransferControllerDelegate> delegate;
@property (retain, nonatomic) CoreTelephonyClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)launchSecureIntentUI:(id)a0 isLocalConvertFlow:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewControllerDidComplete:(id)a0;
- (id)initWithESIMDelegate:(id)a0;
- (void)attemptFailed;
- (void)userDidTapCancel;

@end
