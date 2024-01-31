@class NSString, ManagedWorkoutPlanScheduledItem;

@interface ManagedWorkoutPlanScheduleFilterProperty : NSManagedObject

@property (nonatomic, copy) NSString *bodyFocus;
@property (nonatomic, copy) NSString *equipment;
@property (nonatomic, copy) NSString *skillLevel;
@property (nonatomic, copy) NSString *theme;
@property (nonatomic, retain) ManagedWorkoutPlanScheduledItem *item;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
