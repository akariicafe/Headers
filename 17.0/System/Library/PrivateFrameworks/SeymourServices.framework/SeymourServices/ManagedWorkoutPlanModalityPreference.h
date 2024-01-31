@class NSString, NSSet, ManagedWorkoutPlanTemplate;

@interface ManagedWorkoutPlanModalityPreference : NSManagedObject

@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSSet *preferredMusicGenres;
@property (nonatomic, retain) NSSet *preferredTrainers;
@property (nonatomic, retain) ManagedWorkoutPlanTemplate *template;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
