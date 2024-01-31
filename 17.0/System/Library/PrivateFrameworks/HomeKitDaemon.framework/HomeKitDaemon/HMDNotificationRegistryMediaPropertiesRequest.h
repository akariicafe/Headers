@class NSUUID, NSMutableSet;

@interface HMDNotificationRegistryMediaPropertiesRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *mediaProfileUUID;
@property (retain) NSMutableSet *mediaProperties;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(BOOL)a0 user:(id)a1 deviceIdsDestination:(id)a2 mediaProfileUUID:(id)a3;

@end
