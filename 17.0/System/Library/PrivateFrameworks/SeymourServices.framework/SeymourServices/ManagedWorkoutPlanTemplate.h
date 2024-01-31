@class NSUUID, NSString, NSSet;

@interface ManagedWorkoutPlanTemplate : NSManagedObject

@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int workoutPlanLength;
@property (nonatomic, retain) NSSet *modalityPreferences;
@property (nonatomic, retain) NSSet *schedule;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
