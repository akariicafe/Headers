@interface WFFitnessUIHelper : NSObject

+ (BOOL)isWheelchairUser;
+ (id)timeUnits;
+ (id)activityTypeForLocalizedActivityName:(id)a0;
+ (id)allActivityTypes;
+ (id)allActivityTypesIncludingWheelchairWorkouts:(BOOL)a0 includingSwimmingWorkouts:(BOOL)a1;
+ (void)preferredUnitsForActivityType:(id)a0 completion:(id /* block */)a1;
+ (id)quantityTypesForActivityType:(id)a0;

@end
