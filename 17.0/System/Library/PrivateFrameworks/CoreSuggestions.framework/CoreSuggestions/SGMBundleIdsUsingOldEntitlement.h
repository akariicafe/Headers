@class PETScalarEventTracker;

@interface SGMBundleIdsUsingOldEntitlement : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 bundleId:(id)a1;

@end
