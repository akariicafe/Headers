@class NSNumber;

@interface MTRKeypadInputClusterSendKeyParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *keyCode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
