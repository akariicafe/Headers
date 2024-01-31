@class NSString, IRNodeMO;

@interface IRAVOutputDeviceMO : NSManagedObject

@property (nonatomic) BOOL hasAirplayProperties;
@property (nonatomic) BOOL discoveredOverInfra;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *modelID;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long deviceSubType;
@property (nonatomic) unsigned long long deviceType;
@property (retain, nonatomic) IRNodeMO *node;

+ (id)fetchRequest;
+ (id)aVOutputDeviceMOFromAVOutputDeviceDO:(id)a0 inNode:(id)a1 withManagedObjectContext:(id)a2;
+ (void)setPropertiesOfAVOutputDeviceMO:(id)a0 withAVOutputDevice:(id)a1;

- (id)convert;

@end
