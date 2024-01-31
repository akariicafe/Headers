@class NSString, ManagedWorkoutPlanItemIndex;

@interface ManagedWorkoutPlanItem : NSManagedObject

@property (nonatomic, copy) NSString *workout;
@property (nonatomic, retain) ManagedWorkoutPlanItemIndex *index;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
