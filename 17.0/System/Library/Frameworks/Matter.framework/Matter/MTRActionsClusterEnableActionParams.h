@class NSNumber;

@interface MTRActionsClusterEnableActionParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *actionID;
@property (copy, nonatomic) NSNumber *invokeID;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
