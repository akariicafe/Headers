@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState

- (void)updateState;
- (void)systemDidBecomeReady;
- (id)stateName;
- (id)_nextSystemReadyState;

@end
