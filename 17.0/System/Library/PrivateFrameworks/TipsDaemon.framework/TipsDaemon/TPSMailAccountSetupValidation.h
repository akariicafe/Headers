@interface TPSMailAccountSetupValidation : TPSTargetingValidation

- (void)validateWithCompletion:(id /* block */)a0;
- (void)getCurrentStateWithCompletion:(id /* block */)a0;
- (BOOL)getCurrentState;

@end
