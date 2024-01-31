@class HAPPairingIdentity, NSArray, NSDate, NSNumber, HMFPairingIdentity;

@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *operationType;
@property (retain, nonatomic) HAPPairingIdentity *userPairingIdentity;
@property (retain, nonatomic) HMFPairingIdentity *accessoryPairingIdentity;
@property (retain, nonatomic) HAPPairingIdentity *ownerPairingIdentity;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSArray *dependencies;

+ (id)properties;

- (id)dependentUUIDs;

@end
