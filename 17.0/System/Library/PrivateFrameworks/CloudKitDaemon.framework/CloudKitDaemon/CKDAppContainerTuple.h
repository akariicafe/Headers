@class CKContainerID, CKDApplicationID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKDApplicationID *applicationID;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) NSString *personaID;

- (id)initWithApplicationID:(id)a0 containerID:(id)a1 personaID:(id)a2;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
