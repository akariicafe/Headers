@class MTRDoorLockClusterCredentialStruct, NSNumber;

@interface MTRDoorLockClusterGetCredentialStatusParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRDoorLockClusterCredentialStruct *credential;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
