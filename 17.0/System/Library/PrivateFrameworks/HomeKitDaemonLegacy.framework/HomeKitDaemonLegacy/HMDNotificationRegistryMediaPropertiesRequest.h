@class NSUUID, NSMutableSet;

@interface HMDNotificationRegistryMediaPropertiesRequest : HMDNotificationRegistryRequest

@property (readonly, copy) NSUUID *mediaProfileUUID;
@property (retain) NSMutableSet *mediaProperties;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithEnable:(BOOL)a0 userID:(id)a1 mediaProfileUUID:(id)a2;

@end
