@class NSDictionary, NSArray;

@interface HDDemoDataFoodDatabase : NSObject {
    NSDictionary *_dietaryNutrientDailyValues;
    NSDictionary *_canonicalDietaryUnits;
    NSArray *_beverages;
    NSArray *_breakfastFoods;
    NSArray *_lunchFoods;
    NSArray *_snackFoods;
    NSArray *_dinnerFoods;
}

- (id)init;
- (void).cxx_destruct;
- (id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)a0;
- (id)coffee;
- (double)dailyValueForDietaryNutrientIdentifier:(id)a0;
- (id)randomFoodForType:(long long)a0;

@end
