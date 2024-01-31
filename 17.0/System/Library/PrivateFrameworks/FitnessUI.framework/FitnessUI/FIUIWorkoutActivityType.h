@class HKQuantity, NSUUID, NSDictionary, NSString, FIWorkoutActivityType;

@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *openGoalUUID;
@property (readonly, nonatomic) FIWorkoutActivityType *workoutActivityType;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) unsigned long long auxiliaryTypeIdentifier;
@property (readonly, nonatomic) unsigned long long effectiveTypeIdentifier;
@property (readonly, nonatomic) BOOL isIndoor;
@property (readonly, nonatomic) BOOL isCategorizedOtherWorkout;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long swimmingLocationType;
@property (readonly, nonatomic) HKQuantity *lapLength;
@property (readonly, nonatomic) BOOL isWaterLockActivity;
@property (readonly, nonatomic) BOOL isPartOfMultiSport;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

+ (id)optimizedActivityTypesWithIsWheelchairUser:(BOOL)a0 isSwimmingSupported:(BOOL)a1;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 metadata:(id)a2;
+ (id)activityTypeWithWorkout:(id)a0;
+ (id)defaultActivityTypesWithIsWheelchairUser:(BOOL)a0 isSwimmingSupported:(BOOL)a1 activityMoveMode:(long long)a2;
+ (id)deprecatedActivityTypes;
+ (id)gymKitCapableActivityTypes;
+ (unsigned long long)mapWheelchairUserActivityType:(unsigned long long)a0 isWheelchairUser:(BOOL)a1;
+ (id)nonOptimizedActivityTypes;
+ (id)otherWorkoutActivityTypes;
+ (id)possibleActivityTypesForIdentifier:(unsigned long long)a0 locationType:(long long)a1 swimmingLocationType:(long long)a2 wheelchairUser:(BOOL)a3;
+ (BOOL)shouldDisambiguateOnLocationType:(unsigned long long)a0;
+ (id)swimmingOptimizedActivityTypes;
+ (id)swimmingOtherActivityTypes;
+ (id)unsupportedActivityTypesWithIsWheelchairUser:(BOOL)a0 isSwimmingSupported:(BOOL)a1;
+ (id)wheelchairActivityTypes;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)activityTypeByAddingLapLength:(double)a0;
- (id)activityTypePlistKey;
- (BOOL)hasLocationTypePool;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 isPartOfMultiSport:(BOOL)a2 metadata:(id)a3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 isPartOfMultiSport:(BOOL)a2 metadata:(id)a3 auxiliaryTypeIdentifier:(unsigned long long)a4;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 metadata:(id)a2;
- (id)initWithActivityTypeIdentifier:(unsigned long long)a0 isIndoor:(BOOL)a1 metadata:(id)a2 auxiliaryTypeIdentifier:(unsigned long long)a3;
- (id)localizedNameComponents;
- (id)initWithWorkoutActivityType:(id)a0;

@end
