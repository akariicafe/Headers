@class NSString;

@interface HMDAddAccessoryPairingSharedUserOperation : HMDAddAccessoryPairingOperation <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithAccessory:(id)a0 forSharedUser:(id)a1 sharedUserPairingIdentity:(id)a2 asOwner:(BOOL)a3 asSharedAdmin:(BOOL)a4;
- (id)initWithAccessoryUUID:(id)a0 accessoryIdentifier:(id)a1 forSharedUser:(id)a2 sharedUserPairingIdentity:(id)a3 asOwner:(BOOL)a4 asSharedAdmin:(BOOL)a5 homeUUIDWhereAccessoryWasPaired:(id)a6;
- (BOOL)mainWithError:(id *)a0;

@end
