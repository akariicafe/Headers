@class CDPUIDeviceToDeviceEncryptionFlowContext, UIViewController, CDPContext;

@interface AAUIManateeStateValidator : NSObject {
    UIViewController *_presentingViewController;
    CDPUIDeviceToDeviceEncryptionFlowContext *_flowContext;
}

@property (retain, nonatomic) CDPContext *context;

- (void).cxx_destruct;
- (id)initWithFlowContext:(id)a0 withPresentingViewController:(id)a1;
- (void)repairIfPrimaryAppleAccountIsCDP:(id /* block */)a0;
- (void)verifyAndRepairManateeWithCompletion:(id /* block */)a0;

@end
