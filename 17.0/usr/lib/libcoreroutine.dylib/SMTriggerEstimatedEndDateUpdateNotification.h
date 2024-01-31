@class NSDate;

@interface SMTriggerEstimatedEndDateUpdateNotification : SMTriggerNotification

@property (readonly, nonatomic) NSDate *estimatedEndDate;
@property (readonly, nonatomic) NSDate *coarseEstimatedEndDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTriggerCategory:(unsigned long long)a0 SOSState:(unsigned long long)a1 estimatedEndDate:(id)a2 coarseEstimatedEndDate:(id)a3 triggerName:(id)a4 date:(id)a5 details:(id)a6;

@end
