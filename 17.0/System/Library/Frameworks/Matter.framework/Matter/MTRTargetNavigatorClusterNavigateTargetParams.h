@class NSNumber, NSString;

@interface MTRTargetNavigatorClusterNavigateTargetParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *target;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
