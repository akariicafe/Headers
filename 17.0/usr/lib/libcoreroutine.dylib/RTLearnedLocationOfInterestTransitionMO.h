@class RTLearnedLocationOfInterestMO, NSUUID, NSDate, NSNumber;

@interface RTLearnedLocationOfInterestTransitionMO : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *stopDate;
@property (retain, nonatomic) NSUUID *visitIdentifierDestination;
@property (retain, nonatomic) NSUUID *visitIdentifierOrigin;
@property (retain, nonatomic) RTLearnedLocationOfInterestMO *locationOfInterest;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSNumber *predominantMotionActivityType;

+ (id)fetchRequest;
+ (id)managedObjectWithTransition:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithTransition:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
