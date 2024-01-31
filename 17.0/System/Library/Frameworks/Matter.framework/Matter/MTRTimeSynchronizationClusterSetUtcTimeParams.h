@class NSNumber;

@interface MTRTimeSynchronizationClusterSetUtcTimeParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *utcTime;
@property (copy, nonatomic) NSNumber *granularity;
@property (copy, nonatomic) NSNumber *timeSource;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
