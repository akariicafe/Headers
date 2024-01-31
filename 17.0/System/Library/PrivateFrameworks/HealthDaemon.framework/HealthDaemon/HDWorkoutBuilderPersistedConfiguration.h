@class HDDeviceEntity, NSUUID, HKWorkoutConfiguration, HDSourceEntity, NSString, HKQuantity;

@interface HDWorkoutBuilderPersistedConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSUUID *builderIdentifier;
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (retain, nonatomic) HDSourceEntity *sourceEntity;
@property (copy, nonatomic) NSString *sourceVersion;
@property (retain, nonatomic) HDDeviceEntity *deviceEntity;
@property (nonatomic) unsigned long long goalType;
@property (copy, nonatomic) HKQuantity *goal;
@property (nonatomic) BOOL shouldCollectWorkoutEvents;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
