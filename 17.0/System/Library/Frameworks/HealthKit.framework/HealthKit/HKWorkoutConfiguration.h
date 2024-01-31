@class NSUUID, NSString, HKQuantity;

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldUseLowPowerMode;
@property (copy, nonatomic) NSUUID *fitnessMachineSessionUUID;
@property (copy, nonatomic) NSUUID *predictionSessionUUID;
@property (nonatomic) BOOL shouldDisambiguateLocation;
@property (nonatomic) BOOL shouldUseExtendedMode;
@property (copy, nonatomic) NSString *fitnessPlusCatalogWorkoutId;
@property (nonatomic) long long fitnessPlusMediaType;
@property (copy, nonatomic) NSUUID *suggestedActivityUUID;
@property unsigned long long activityType;
@property long long locationType;
@property long long swimmingLocationType;
@property (copy) HKQuantity *lapLength;

+ (id)_workoutConfigurationFromDictionary:(id)a0;

- (id)_dictionaryRepresentation;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)validateIgnoringDeviceSupport:(BOOL)a0 error:(id *)a1;

@end
