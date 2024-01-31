@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject

+ (Class)meltedClass;
+ (int)convertFromReminderKitFrequency:(long long)a0;
+ (int)convertFromReminderKitWeekday:(long long)a0;
+ (long long)convertToReminderKitFrequency:(int)a0;
+ (long long)convertToReminderKitWeekday:(int)a0;

- (id)remObjectID;
- (long long)interval;
- (id)uuid;
- (id)endDate;
- (unsigned long long)count;
- (id)specifier;
- (id)uniqueIdentifier;
- (id)_recurrenceRule;
- (id)addUpdatedRecurrenceRule:(id)a0;
- (id)daysOfTheWeekFromREMRecurrenceRule;
- (long long)ekWeekdayToREMWeekday:(long long)a0;
- (int)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (id)initWithAlternateUniverseObject:(id)a0 inEventStore:(id)a1 withUpdatedChildObjects:(id)a2;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (void)loadSpecifierDaysOfTheWeek:(id *)a0 daysOfTheMonth:(id *)a1 monthsOfTheYear:(id *)a2 weeksOfTheYear:(id *)a3 daysOfTheYear:(id *)a4 setPositions:(id *)a5;
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:(id)a0;
- (long long)remWeekdayToEKWeekday:(long long)a0;

@end
