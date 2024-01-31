@class NSDate;

@interface RTTripSegmentInertialDataMO : NSManagedObject

@property (nonatomic) double deltaCourseSpeedCovRadMps;
@property (nonatomic) double deltaSpeedVarMps2;
@property (nonatomic) double deltaCourseVarRad2;
@property (nonatomic) double deltaSpeedMps;
@property (nonatomic) double deltaCourseRad;
@property (nonatomic) double dataPeriodSec;
@property (copy, nonatomic) NSDate *timestamp;

+ (id)fetchRequest;
+ (id)managedObjectWithTripSegmentInertialData:(id)a0 inManagedObjectContext:(id)a1;

@end
