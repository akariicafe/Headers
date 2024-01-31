@interface PFDayOfWeekSchedule : NSObject <PFOperationSchedule> {
    void /* unknown type, empty encoding */ dayOfWeek;
    void /* unknown type, empty encoding */ calendar;
}

@property (class, nonatomic, readonly) PFDayOfWeekSchedule *firstDayOfWeek;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDayOfWeek:(long long)a0 calendar:(id)a1;
- (BOOL)shouldExecuteOn:(id)a0 previousExecution:(id)a1;

@end
