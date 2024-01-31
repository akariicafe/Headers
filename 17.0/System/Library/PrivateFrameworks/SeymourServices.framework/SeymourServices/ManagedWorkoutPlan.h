@class NSUUID, NSString, NSSet, NSDate;

@interface ManagedWorkoutPlan : NSManagedObject

@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *startDate;
@property (nonatomic) int state;
@property (nonatomic, copy) NSUUID *templateIdentifier;
@property (nonatomic, retain) NSSet *schedule;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
