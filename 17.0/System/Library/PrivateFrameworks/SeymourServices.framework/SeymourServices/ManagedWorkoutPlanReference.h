@class NSString, ManagedArchivedWorkoutPlanSession;

@interface ManagedWorkoutPlanReference : NSManagedObject

@property (nonatomic, copy) NSString *dateOffset;
@property (nonatomic) int index;
@property (nonatomic, retain) ManagedArchivedWorkoutPlanSession *session;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
