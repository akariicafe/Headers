@class NSUUID, NSMutableSet;

@interface HMDNotificationRegistryCharacteristicsRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *accessoryUUID;
@property (retain) NSMutableSet *characteristicInstanceIDs;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(BOOL)a0 user:(id)a1 deviceIdsDestination:(id)a2 accessoryUUID:(id)a3;

@end
