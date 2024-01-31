@class NSString, IRNodeMO;

@interface IRRapportDeviceMO : NSManagedObject

@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *idsID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *rapportEffectiveID;
@property (retain, nonatomic) NSString *mediaRemoteIdentifier;
@property (retain, nonatomic) NSString *iCloudId;
@property (retain, nonatomic) NSString *mediaRouteIdentifier;
@property (retain, nonatomic) IRNodeMO *node;

+ (id)fetchRequest;
+ (id)aVOutputDeviceMOFromRapportDeviceDO:(id)a0 inNode:(id)a1 withManagedObjectContext:(id)a2;
+ (void)setPropertiesOfRapportDeviceMO:(id)a0 withRapportDO:(id)a1;

- (id)convert;

@end
