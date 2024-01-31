@class NSUUID, NSString, ManagedWorkoutPlanReference;

@interface ManagedArchivedWorkoutPlanSession : NSManagedObject

@property (nonatomic, copy) NSUUID *planIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) ManagedWorkoutPlanReference *reference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
