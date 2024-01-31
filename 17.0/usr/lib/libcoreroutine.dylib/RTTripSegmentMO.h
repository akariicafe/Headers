@class NSUUID, NSDate;

@interface RTTripSegmentMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) double tripDistance_m;
@property (nonatomic) double tripDistanceUncertainty_m;
@property (nonatomic) short modeOfTransportation;

+ (id)fetchRequest;
+ (id)managedObjectWithTripSegment:(id)a0 inManagedObjectContext:(id)a1;

@end
