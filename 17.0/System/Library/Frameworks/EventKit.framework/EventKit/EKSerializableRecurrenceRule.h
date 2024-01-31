@class NSArray, EKRecurrenceEnd;

@interface EKSerializableRecurrenceRule : EKSerializableObject

@property (readonly, nonatomic) long long frequency;
@property (readonly, nonatomic) long long interval;
@property (copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;
@property (readonly, nonatomic) long long firstDayOfTheWeek;
@property (readonly, nonatomic) NSArray *daysOfTheWeek;
@property (readonly, nonatomic) NSArray *daysOfTheMonth;
@property (readonly, nonatomic) NSArray *daysOfTheYear;
@property (readonly, nonatomic) NSArray *weeksOfTheYear;
@property (readonly, nonatomic) NSArray *monthsOfTheYear;
@property (readonly, nonatomic) NSArray *setPositions;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)createRecurrenceRule:(id *)a0;
- (id)initWithRecurrenceRule:(id)a0;

@end
