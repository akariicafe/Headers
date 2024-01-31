@class IRAVOutputDeviceMO, NSString, IRCandidateMO, IRRapportDeviceMO;

@interface IRNodeMO : NSManagedObject

@property (retain, nonatomic) NSString *avOutpuDeviceIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;
@property (retain, nonatomic) IRAVOutputDeviceMO *avOutputDevice;
@property (retain, nonatomic) IRCandidateMO *candidate;
@property (retain, nonatomic) IRRapportDeviceMO *rapportDevice;

+ (id)fetchRequest;
+ (id)nodeMOFromNodeDO:(id)a0 forCandidate:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfNodeMO:(id)a0 withNodeDO:(id)a1;

- (id)convert;

@end
