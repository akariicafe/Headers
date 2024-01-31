@interface ATXAppSessionModeLoggingHelper : NSObject

- (id)appLaunchesSinceDate:(id)a0;
- (id)coalesceAppLaunches:(id)a0;
- (BOOL)shouldCoalesceLaunch:(id)a0 nextLaunch:(id)a1;
- (id)stripStoreEvent:(id)a0;

@end
