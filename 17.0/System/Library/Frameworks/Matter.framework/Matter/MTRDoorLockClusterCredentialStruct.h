@class NSNumber;

@interface MTRDoorLockClusterCredentialStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *credentialType;
@property (copy, nonatomic) NSNumber *credentialIndex;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
