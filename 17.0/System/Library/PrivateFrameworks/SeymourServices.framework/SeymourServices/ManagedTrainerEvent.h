@class NSString, NSSet;

@interface ManagedTrainerEvent : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double leadDuration;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
