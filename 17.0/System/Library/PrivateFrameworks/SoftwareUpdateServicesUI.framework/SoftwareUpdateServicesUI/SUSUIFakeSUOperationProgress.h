@interface SUSUIFakeSUOperationProgress : SUOperationProgress

- (float)percentComplete;
- (BOOL)isDone;
- (double)timeRemaining;
- (id)phase;
- (float)normalizedPercentComplete;

@end
