@class NSString, ManagedCatalogWorkoutMetadata;

@interface ManagedCoachingEvent : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *intensity;
@property (nonatomic) double leadDuration;
@property (nonatomic) int rangeLowerBound;
@property (nonatomic) int rangeUpperBound;
@property (nonatomic) BOOL shouldShowPlus;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
