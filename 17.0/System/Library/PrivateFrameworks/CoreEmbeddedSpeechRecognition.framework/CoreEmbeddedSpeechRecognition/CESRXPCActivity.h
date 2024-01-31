@interface CESRXPCActivity : NSObject

- (void)registerXPCActivities;
- (void)registerPeriodicPreheatActivity;
- (void)registerDailyANECompilationActivity;
- (void)registerDailySubscriptionCleanupActivity;
- (void)registerPostUpgradeANECompilationActivity;
- (void)registerPostUpgradeSubscriptionActivity;

@end
