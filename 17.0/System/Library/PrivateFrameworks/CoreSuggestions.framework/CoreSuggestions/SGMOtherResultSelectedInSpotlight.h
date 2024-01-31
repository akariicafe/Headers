@class PETScalarEventTracker;

@interface SGMOtherResultSelectedInSpotlight : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0;

@end
