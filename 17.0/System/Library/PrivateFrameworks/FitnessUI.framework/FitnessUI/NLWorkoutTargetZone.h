@interface NLWorkoutTargetZone : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double currentValue;
@property (nonatomic) BOOL enabled;

+ (id)powerTargetZoneForActivityType:(id)a0;
+ (void)saveTargetZone:(id)a0 forActivityType:(id)a1;
+ (id)cadenceTargetZoneForActivityType:(id)a0;
+ (id)defaultTargetZoneForTypeKey:(id)a0;
+ (id)mapTargetZoneTypeEnumToString:(long long)a0;
+ (long long)mapTargetZoneTypeStringToEnum:(id)a0;
+ (id)metadataForTargetZone:(id)a0;
+ (id)paceTargetZoneForActivityType:(id)a0;
+ (id)restoreFromDictionary:(id)a0;
+ (id)restoreFromDictionary:(id)a0 activityType:(id)a1;
+ (id)serializeTargetZone:(id)a0;
+ (id)targetZoneForActivityType:(id)a0 targetZoneActivityTypeKey:(id)a1;
+ (long long)targetZoneMasterTypeForTargetZoneType:(long long)a0;
+ (id)targetZonesFromMetadata:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 min:(double)a1 max:(double)a2 currentValue:(double)a3;
- (BOOL)isSingleThreshold;
- (unsigned long long)stateForDistanceUnit:(id)a0;
- (unsigned long long)stateForPaceZoneWithDistanceUnit:(id)a0;
- (unsigned long long)stateForStandardZone;

@end
