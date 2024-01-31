@class NSString, FCCAtypicalDayConfiguration;

@interface FCAtypicalDayEvent : NSObject <FCGoalProgressEvent> {
    FCCAtypicalDayConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextFireDateWithModel:(id)a0;
- (id)goalProgressContentForModel:(id)a0;
- (id)eventIdentifier;
- (BOOL)shouldFireWithTypicalDayModel:(id)a0 evaluationDelegate:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isProgressSignificantlyBetter:(double)a0;
- (double)minimumDayDuration;
- (BOOL)_isProgressSignificantlyWorse:(double)a0;

@end
