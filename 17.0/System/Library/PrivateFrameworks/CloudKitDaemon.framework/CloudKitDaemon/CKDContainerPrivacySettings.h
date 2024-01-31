@class CKContainerID, NSSet;

@interface CKDContainerPrivacySettings : NSObject

@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) NSSet *applicationBundleIDs;
@property (readonly, nonatomic) long long discoverable;

- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithContainerID:(id)a0 applicationBundleIDs:(id)a1 discoverable:(long long)a2;

@end
