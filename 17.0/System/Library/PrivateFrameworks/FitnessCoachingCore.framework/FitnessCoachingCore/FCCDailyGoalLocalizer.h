@interface FCCDailyGoalLocalizer : NSObject

+ (id)localizedAppName;
+ (id)_keyForEventType:(id)a0 aboveAverage:(BOOL)a1;
+ (id)_keyForGoalType:(long long)a0;
+ (id)_keyForGoalTypes:(id)a0;
+ (id)_keyForTimeOfDayAtDate:(id)a0;
+ (id)_localizeCount:(double)a0 forKey:(id)a1 experienceType:(unsigned long long)a2;
+ (id)localizedDescriptionForGoalsCompleted:(id)a0 singleGoalExceeded:(BOOL)a1 date:(id)a2 firstName:(id)a3 isWheelchairUser:(BOOL)a4 experienceType:(unsigned long long)a5 isStandalone:(BOOL)a6;
+ (id)localizedDescriptionForIncompleteGoalTypes:(id)a0 percentComplete:(double)a1 value:(double)a2 valueRemaining:(double)a3 date:(id)a4 firstName:(id)a5 moveUnit:(id)a6 isWheelchairUser:(BOOL)a7 progressEventIdentifier:(id)a8 minutesToWalkToCompleteRing:(long long)a9 hasCurrentMoveStreak:(BOOL)a10 experienceType:(unsigned long long)a11 isStandalone:(BOOL)a12;
+ (id)localizedTitleForGoalsCompleted:(id)a0 isWheelchairUser:(BOOL)a1 experienceType:(unsigned long long)a2;
+ (id)localizedTitleForIncompleteGoalTypes:(id)a0 percentComplete:(double)a1 valueRemaining:(double)a2 progressEventIdentifier:(id)a3 experienceType:(unsigned long long)a4 isStandalone:(BOOL)a5;

@end
