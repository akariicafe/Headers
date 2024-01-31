@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {
    BOOL _operationWasCancelled;
}

- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)cancelOperation;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (void)startPrewarming;
- (id)_manufacturerIdentifier;
- (BOOL)canCancelOperation;

@end
