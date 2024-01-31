@class NSData, NSSet, HMDUser;

@interface HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation : HMFObject <NSCopying>

@property (readonly, copy) NSData *deviceCredentialKey;
@property (readonly, copy) NSSet *accessoriesUUIDs;
@property (readonly, weak) HMDUser *user;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceCredentialKey:(id)a0 accessories:(id)a1 user:(id)a2;
- (id)initWithDeviceCredentialKey:(id)a0 accessoriesUUIDs:(id)a1 user:(id)a2;
- (id)operationByMergingWithOperation:(id)a0;

@end
