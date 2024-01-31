@interface TPSSystemVersionUpdateValidation : TPSTargetingValidation

- (void)validateWithCompletion:(id /* block */)a0;
- (BOOL)validateLastMajorSystemVersionUpdateSinceTimeInterval:(double)a0 desiredOrder:(long long)a1;

@end
