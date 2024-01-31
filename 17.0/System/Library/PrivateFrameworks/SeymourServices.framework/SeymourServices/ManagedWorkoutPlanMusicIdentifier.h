@class NSString, ManagedWorkoutPlanModalityPreference;

@interface ManagedWorkoutPlanMusicIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) ManagedWorkoutPlanModalityPreference *modalityPreference;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
