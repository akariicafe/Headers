@class NSNumber;

@interface MTRWindowCoveringClusterGoToTiltPercentageParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *tiltPercent100thsValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
