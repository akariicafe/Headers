@class NSSet, HMBCloudZoneRebuilderStatus, NSData, HMBCloudZoneID, NSNumber, HMBCloudZone;

@interface HMBCloudZoneStateModel : HMBCloudStateModel

@property (retain, nonatomic) NSData *subscriptionsData;
@property (weak) HMBCloudZone *cloudZone;
@property (retain, nonatomic) HMBCloudZoneID *zoneID;
@property (retain, nonatomic) NSNumber *needsZoneCreation;
@property (retain, nonatomic) NSNumber *needsZoneDeletion;
@property (retain, nonatomic) NSSet *subscriptions;
@property (retain, nonatomic) HMBCloudZoneRebuilderStatus *rebuilderStatus;

+ (id)hmbProperties;

- (void).cxx_destruct;
- (id)initWithModelID:(id)a0 parentModelID:(id)a1;

@end
