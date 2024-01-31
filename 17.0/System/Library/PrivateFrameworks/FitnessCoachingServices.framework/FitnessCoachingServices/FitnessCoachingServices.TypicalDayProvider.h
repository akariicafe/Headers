@interface FitnessCoachingServices.TypicalDayProvider : NSObject <FITypicalDayActivityModelDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ state;
}

- (id)currentCalendar;
- (id)currentDate;
- (BOOL)enumerateActivitySummariesFromDateComponents:(id)a0 toDateComponents:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (id)firstOnWristDateToday;
- (id)init;
- (void).cxx_destruct;

@end
