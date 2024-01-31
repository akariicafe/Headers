@interface ManagedEstimatedCalories : NSManagedObject

@property (nonatomic) double activeCalorieRate;
@property (nonatomic) int activityType;
@property (nonatomic) double basalCalorieRate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
