@class NSString, ManagedWorkoutPlanScheduledItem, ManagedWorkoutPlanTemplate;

@interface ManagedWorkoutPlanScheduledItemIndex : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic, copy) NSString *offset;
@property (nonatomic, retain) ManagedWorkoutPlanScheduledItem *item;
@property (nonatomic, retain) ManagedWorkoutPlanTemplate *template;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
