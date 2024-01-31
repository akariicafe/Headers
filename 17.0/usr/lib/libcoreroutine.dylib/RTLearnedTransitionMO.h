@class RTLearnedVisitMO, NSNumber, NSDate;

@interface RTLearnedTransitionMO : RTCloudManagedObject

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *stopDate;
@property (retain, nonatomic) RTLearnedVisitMO *origin;
@property (retain, nonatomic) RTLearnedVisitMO *destination;
@property (copy, nonatomic) NSNumber *predominantMotionActivityType;

+ (id)fetchRequest;
+ (id)managedObjectWithTransition:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithTransition:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
