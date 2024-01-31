@class NSUUID, NSDate;

@interface RTPeopleDensityMO : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) double densityScore;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) double scanDuration;

+ (id)fetchRequest;
+ (id)managedObjectWithIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 densityScore:(double)a3 scanDuration:(double)a4 inManagedObjectContext:(id)a5;
+ (id)managedObjectWithPeopleDensity:(id)a0 inManagedObjectContext:(id)a1;

@end
