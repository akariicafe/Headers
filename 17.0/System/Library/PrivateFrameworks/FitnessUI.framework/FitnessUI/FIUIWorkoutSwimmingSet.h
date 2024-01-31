@class HKQuantity, NSDate;

@interface FIUIWorkoutSwimmingSet : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *movementEndDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long dominantStrokeStyle;
@property (nonatomic) long long strokeCount;
@property (retain, nonatomic) HKQuantity *distance;

+ (id)_decimalNumberFormatter;

- (id)description;
- (void).cxx_destruct;
- (double)_activeDuration;
- (double)_restingDuration;
- (id)formattedActiveDurationWithFormattingManager:(id)a0;
- (id)formattedDistanceValueWithFormattingManager:(id)a0;
- (id)formattedDominantStrokeStyle;
- (id)formattedPaceUsingFormatType:(long long)a0 formattingManager:(id)a1;
- (id)formattedRestDurationWithFormattingManager:(id)a0;
- (id)formattedStrokeCountUsingFormatType:(long long)a0 formattingManager:(id)a1;

@end
