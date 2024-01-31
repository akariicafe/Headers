@interface PFScheduledOperationScheduler : NSObject {
    void /* unknown type, empty encoding */ schedule;
    void /* unknown type, empty encoding */ storage;
}

@property (class, nonatomic, readonly) PFScheduledOperationScheduler *weeklyScheduler;

- (id)init;
- (void).cxx_destruct;
- (void)evaluateOperationWithIdentifier:(id)a0 evaluationHandler:(id /* block */)a1;
- (id)initWithSchedule:(id)a0 scheduleStorage:(id)a1;

@end
