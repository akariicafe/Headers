@interface NLWorkoutSplitStorage : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double value;
@property (nonatomic) BOOL enabled;

+ (id)_defaultSplit:(id)a0 activityType:(id)a1 userDistanceUnit:(id)a2;
+ (double)_defaultSplitDistanceForActivityType:(id)a0 userDistanceUnit:(id)a1;
+ (id)distanceSplitForActivityType:(id)a0 userDistanceUnit:(id)a1;
+ (id)mapSplitTypeEnumToString:(long long)a0;
+ (long long)mapSplitTypeStringToEnum:(id)a0;
+ (id)restoreFromDictionary:(id)a0;
+ (id)restoreFromDictionary:(id)a0 activityType:(id)a1;
+ (void)saveSplitStorage:(id)a0 forActivityType:(id)a1;
+ (id)serializeSplitStorage:(id)a0;
+ (id)splitForActivityType:(id)a0 splitsActivityTypeKey:(id)a1 userDistanceUnit:(id)a2;
+ (id)timeSplitForActivityType:(id)a0;

- (id)description;
- (id)initWithType:(long long)a0 value:(double)a1;

@end
