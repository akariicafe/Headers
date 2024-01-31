@interface MNTracePlayerETAUpdater : MNSessionUpdateManager

- (void)_updateForETARoute:(id)a0;
- (void)playETAUpdate:(id)a0;
- (void)resumeUpdateRequests;
- (void)startUpdateRequestsForRoutes:(id)a0 andNavigationType:(long long)a1;

@end
