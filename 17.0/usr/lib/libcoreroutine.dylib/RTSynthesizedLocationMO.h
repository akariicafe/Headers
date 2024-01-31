@class NSDate;

@interface RTSynthesizedLocationMO : NSManagedObject

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;
@property (nonatomic) double speed;
@property (nonatomic) double course;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) short downsamplingLevel;
@property (nonatomic) short geoRoadClass;
@property (nonatomic) short geoFormOfWay;
@property (nonatomic) short locationType;

+ (id)fetchRequest;
+ (id)managedObjectWithSynthesizedLocation:(id)a0 inManagedObjectContext:(id)a1;

@end
