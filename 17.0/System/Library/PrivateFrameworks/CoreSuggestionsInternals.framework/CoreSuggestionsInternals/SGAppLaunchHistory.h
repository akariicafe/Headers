@interface SGAppLaunchHistory : NSObject

- (unsigned long long)launchCountForBundleId:(id)a0 afterDate:(id)a1 limit:(unsigned long long)a2;
- (id)launchCountsForBundleIds:(id)a0 afterDate:(id)a1 limit:(unsigned long long)a2;

@end
