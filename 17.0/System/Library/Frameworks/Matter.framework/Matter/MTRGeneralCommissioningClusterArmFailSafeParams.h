@class NSNumber;

@interface MTRGeneralCommissioningClusterArmFailSafeParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *expiryLengthSeconds;
@property (copy, nonatomic) NSNumber *breadcrumb;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
