@class NSUUID, SMSessionManagerStateMO, NSDate;

@interface SMSessionManagerStatusMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *stateQueryDate;
@property (copy, nonatomic) NSUUID *lastSessionIDDuringMagnetBreak;
@property (retain, nonatomic) SMSessionManagerStateMO *state;

+ (id)fetchRequest;
+ (id)managedObjectWithSessionManagerStatus:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithSessionManagerStatus:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
