@class NSCalendar, NSDateComponents, NSDate, NSNumber;

@interface ACHActivityAwardingDateCache : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDateComponents *currentDateComponents;
@property (readonly, nonatomic) NSNumber *dayOfWeekForToday;
@property (readonly, nonatomic) NSNumber *dayOfWeekForLastDayOfFitnessWeek;
@property (readonly, nonatomic) NSNumber *numberOfDaysInThisMonth;
@property (readonly, nonatomic) NSNumber *dayOfMonthForToday;

- (void)_clearDateVariables;
- (id)initWithCalendar:(id)a0;
- (void).cxx_destruct;

@end
