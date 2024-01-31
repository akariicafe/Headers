@class NSString, SSProximityDevice;
@protocol TSSIMSetupFlowDelegate;

@interface TSProximityWaitingViewController : TSOBWelcomeController <TSSetupFlowItem>

@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (weak) SSProximityDevice *btServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBTServer:(id)a0 transferBackPhoneNumber:(id)a1;
- (BOOL)isStartOverRequiredOnBackButtonTapped;

@end
