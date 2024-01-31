@class PETScalarEventTracker;

@interface SGMBadInteractionIgnored : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 reason:(struct SGMInteractionIgnoredReason_ { unsigned long long x0; })a1;

@end
