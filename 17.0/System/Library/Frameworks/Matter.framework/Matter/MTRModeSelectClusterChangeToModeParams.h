@class NSNumber;

@interface MTRModeSelectClusterChangeToModeParams : NSObject <NSCopying>

@property (copy, nonatomic, getter=getNewMode) NSNumber *newMode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
