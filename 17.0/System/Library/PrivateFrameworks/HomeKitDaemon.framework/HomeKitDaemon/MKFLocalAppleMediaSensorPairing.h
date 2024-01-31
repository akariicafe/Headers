@class NSUUID;

@interface MKFLocalAppleMediaSensorPairing : HMDManagedObject

@property (copy, nonatomic) NSUUID *pairedSensorUUID;

+ (id)fetchRequest;

@end
