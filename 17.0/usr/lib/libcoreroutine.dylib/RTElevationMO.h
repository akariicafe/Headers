@class NSDate;

@interface RTElevationMO : NSManagedObject

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) double elevation;
@property (nonatomic) double elevationUncertainty;
@property (nonatomic) short estimationStatus;

+ (id)fetchRequest;
+ (id)managedObjectWithElevation:(id)a0 inManagedObjectContext:(id)a1;

@end
