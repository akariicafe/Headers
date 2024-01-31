@class NSNumber, NSDate;

@interface RTCLLocationMO : NSManagedObject

@property (nonatomic) double altitude;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double speed;
@property (nonatomic) double speedAccuracy;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSNumber *type;
@property (nonatomic) double verticalAccuracy;
@property (retain, nonatomic) NSNumber *signalEnvironmentType;

+ (id)fetchRequest;
+ (id)managedObjectWithLatitude:(double)a0 longitude:(double)a1 altitude:(double)a2 horizontalAccuracy:(double)a3 verticalAccuracy:(double)a4 course:(double)a5 courseAccuracy:(double)a6 speed:(double)a7 speedAccuracy:(double)a8 timestamp:(id)a9 type:(id)a10 signalEnvironmentType:(id)a11 inManagedObjectContext:(id)a12;

@end
