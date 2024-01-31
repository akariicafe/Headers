@protocol HKMedicationsCapabilityProviding;

@interface HKMedicationsBehavior : NSObject

@property (nonatomic) BOOL medicationsFutureMigrationsEnabled;
@property (nonatomic) BOOL asyncMedicationReschedulesEnabled;
@property (readonly, copy, nonatomic) id<HKMedicationsCapabilityProviding> mockPairedDevice;

+ (BOOL)hasSupportedAppleWatchPaired;
+ (id)_getActivePairedDevice;
+ (void)resetSharedBehavior;
+ (BOOL)_medicationFutureMigrationsEnabled;
+ (id)sharedBehavior;
+ (void)setSharedBehavior:(id)a0;
+ (id)_unitTesting_behaviorWithMockPairedDevice:(id)a0;

- (id)init;
- (id)_initWithFutureMigrationsEnabled:(BOOL)a0 asyncMedicationReschedulesEnabled:(BOOL)a1 mockPairedDevice:(id)a2;
- (void).cxx_destruct;

@end
