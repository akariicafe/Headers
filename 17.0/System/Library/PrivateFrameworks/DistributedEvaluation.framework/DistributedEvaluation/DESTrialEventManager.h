@interface DESTrialEventManager : DESEventManager

+ (void)initialize;
+ (void)_sendTrialMetrics:(id)a0 dimensions:(id)a1 factorsState:(id)a2;
+ (void)sendEventTaskCompletedForBundleID:(id)a0 factorsState:(id)a1 duration:(float)a2 error:(id)a3;
+ (void)sendEventTaskFetchedForBundleID:(id)a0 factorsState:(id)a1;
+ (void)sendEventTaskScheduledStatusForBundleID:(id)a0 factorsState:(id)a1 success:(BOOL)a2;

@end
