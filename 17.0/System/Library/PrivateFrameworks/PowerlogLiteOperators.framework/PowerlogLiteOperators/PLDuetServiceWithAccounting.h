@interface PLDuetServiceWithAccounting : PLDuetServiceImpl

+ (id)mapBundleID:(id)a0;

- (id)init;
- (void)accumulateWithLastCompletedDate:(id)a0 withNow:(id)a1;
- (void)accumulateWithLastCompletedDate:(id)a0 withNow:(id)a1 withQualificationID:(int)a2;
- (void)createQualificationEventsWithEventTransitions:(id)a0 withQualificationID:(int)a1;
- (void)didReceiveEventWithPayload:(id)a0;
- (id)energyResponse;
- (id)energyResponseWithQualificationID:(int)a0;
- (id)eventTransitionsWithEvents:(id)a0;
- (void)initOperatorDependancies:(id)a0;

@end
