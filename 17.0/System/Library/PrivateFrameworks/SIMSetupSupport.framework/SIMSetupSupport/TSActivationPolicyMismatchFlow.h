@class NSString, NSError;

@interface TSActivationPolicyMismatchFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSError *_planItemError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (id)initWithPlanItemError:(id)a0;
- (id)nextViewControllerFrom:(id)a0;

@end
