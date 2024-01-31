@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject

@property (retain, nonatomic) HKUnit *distanceUnit;

- (void).cxx_destruct;
- (double)valueForIndex:(long long)a0;
- (long long)indexForValue:(double)a0;
- (id)initWithDistanceUnit:(id)a0;
- (double)valueTranslatedFromDistanceUnit:(double)a0;
- (double)valueTranslatedIntoDistanceUnit:(double)a0;

@end
