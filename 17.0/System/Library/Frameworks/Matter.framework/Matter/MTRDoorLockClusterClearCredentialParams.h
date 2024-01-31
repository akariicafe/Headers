@class MTRDoorLockClusterCredentialStruct, NSNumber;

@interface MTRDoorLockClusterClearCredentialParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRDoorLockClusterCredentialStruct *credential;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
