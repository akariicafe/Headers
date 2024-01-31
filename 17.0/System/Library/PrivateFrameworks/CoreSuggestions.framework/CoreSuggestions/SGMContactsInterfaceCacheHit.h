@class PETScalarEventTracker;

@interface SGMContactsInterfaceCacheHit : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 cacheHit:(struct SGMTypeSafeBool_ { unsigned long long x0; })a1;

@end
