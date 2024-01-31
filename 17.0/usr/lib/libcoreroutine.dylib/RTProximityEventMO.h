@class NSUUID, NSArray, NSDate;

@interface RTProximityEventMO : NSManagedObject

@property (copy, nonatomic) NSUUID *eventID;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long relationship;
@property (nonatomic) double socialScore;
@property (retain, nonatomic) NSArray *frequencyTransformable;
@property (retain, nonatomic) NSArray *recencyTransformable;
@property (retain, nonatomic) NSArray *significanceTransformable;

+ (id)fetchRequest;
+ (id)managedObjectWithEventID:(id)a0 startDate:(id)a1 endDate:(id)a2 relationship:(long long)a3 socialScore:(double)a4 frequency:(id)a5 recency:(id)a6 significance:(id)a7 inManagedObjectContext:(id)a8;
+ (id)managedObjectWithProximityEvent:(id)a0 inManagedObjectContext:(id)a1;

@end
