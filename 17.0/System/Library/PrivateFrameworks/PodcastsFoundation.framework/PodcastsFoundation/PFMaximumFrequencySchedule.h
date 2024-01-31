@interface PFMaximumFrequencySchedule : NSObject <PFOperationSchedule> {
    void /* unknown type, empty encoding */ interval;
}

- (id)init;
- (id)initWithInterval:(double)a0;
- (id)initWithFrequency:(long long)a0;
- (BOOL)shouldExecuteOn:(id)a0 previousExecution:(id)a1;

@end
