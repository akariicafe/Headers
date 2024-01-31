@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject

@property long long frequency;
@property long long interval;
@property unsigned long long count;
@property (retain) NSArray *dayNumbers;
@property int days;
@property int ordinalValue;
@property (retain) NSArray *monthNumbers;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)daysOfTheWeek;
- (id)recurrenceRule;
- (id)setPositions;
- (long long)_frequencyToUse;
- (void)_setDefaultValues;
- (id)daysOfTheWeekWithWeek:(long long)a0;

@end
