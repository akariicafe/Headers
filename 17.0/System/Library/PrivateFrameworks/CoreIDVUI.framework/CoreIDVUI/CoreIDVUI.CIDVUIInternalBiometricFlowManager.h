@interface CoreIDVUI.CIDVUIInternalBiometricFlowManager : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ bioBindingController;
}

- (id)init;
- (void).cxx_destruct;
- (void)deleteBoundACLWithCompletion:(id /* block */)a0;
- (void)evaluateBoundACLWithCompletion:(id /* block */)a0;
- (void)fetchBiometricBindingDetailsWithCompletion:(id /* block */)a0;

@end
