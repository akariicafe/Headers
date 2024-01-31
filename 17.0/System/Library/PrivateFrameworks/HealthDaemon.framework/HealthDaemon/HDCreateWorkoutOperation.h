@class NSUUID, NSString, HKDevice, NSArray, HDWorkoutBuilderStatisticsCalculators, NSDateInterval, NSDictionary, HKWorkoutConfiguration, HKSource, HKWorkout, HKQuantity;

@interface HDCreateWorkoutOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) HKDevice *device;
@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly, copy, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) NSArray *activities;
@property (readonly, nonatomic) HDWorkoutBuilderStatisticsCalculators *statisticsCalculators;
@property (readonly, copy, nonatomic) NSArray *associatedSeries;
@property (readonly, nonatomic) unsigned long long goalType;
@property (readonly, copy, nonatomic) HKQuantity *goal;
@property (readonly, copy, nonatomic) NSArray *quantityTypesIncludedWhilePaused;
@property (readonly, nonatomic) HKWorkout *createdWorkout;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithWorkoutConfiguration:(id)a0 identifier:(id)a1 dateInterval:(id)a2 metadata:(id)a3 device:(id)a4 source:(id)a5 sourceVersion:(id)a6 events:(id)a7 activities:(id)a8 statisticsCalculators:(id)a9 associatedSeries:(id)a10 goalType:(unsigned long long)a11 goal:(id)a12 quantityTypesIncludedWhilePaused:(id)a13;

@end
