@class NSString, IRMiLoLSLPredictionMO;

@interface IRMiLoNearbyDeviceMO : NSManagedObject

@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) BOOL hasBleRssi;
@property (retain, nonatomic) IRMiLoLSLPredictionMO *prediction;

+ (id)fetchRequest;
+ (id)miLoNearbyDeviceMOWithMiLoNearbyDeviceDO:(id)a0 miloPrediction:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfMiLoNearbyDeviceMO:(id)a0 withIRMiLoNearbyDeviceDO:(id)a1;

- (id)convert;

@end
