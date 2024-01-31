@class NSString, NSSet, ManagedWorkoutPlanScheduledItemIndex;

@interface ManagedWorkoutPlanScheduledItem : NSManagedObject

@property (nonatomic) int duration;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSSet *filterProperties;
@property (nonatomic, retain) ManagedWorkoutPlanScheduledItemIndex *index;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
