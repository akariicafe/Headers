@class NSString, ManagedWorkoutPlanItem, ManagedWorkoutPlan;

@interface ManagedWorkoutPlanItemIndex : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic, copy) NSString *offset;
@property (nonatomic, retain) ManagedWorkoutPlanItem *item;
@property (nonatomic, retain) ManagedWorkoutPlan *plan;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
