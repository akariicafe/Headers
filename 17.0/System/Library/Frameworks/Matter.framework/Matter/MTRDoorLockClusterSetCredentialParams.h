@class NSNumber, MTRDoorLockClusterCredentialStruct, NSData;

@interface MTRDoorLockClusterSetCredentialParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *operationType;
@property (copy, nonatomic) MTRDoorLockClusterCredentialStruct *credential;
@property (copy, nonatomic) NSData *credentialData;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *userStatus;
@property (copy, nonatomic) NSNumber *userType;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
