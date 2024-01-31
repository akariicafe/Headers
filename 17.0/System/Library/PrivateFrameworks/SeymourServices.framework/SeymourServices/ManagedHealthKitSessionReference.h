@class NSString, ManagedHealthKitWorkout;

@interface ManagedHealthKitSessionReference : NSManagedObject

@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSString *workoutIdentifier;
@property (nonatomic, retain) ManagedHealthKitWorkout *workout;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
