@class SCLState, NSDate, SCLSchedulingParameters;
@protocol SCLSchedulingEngineDelegate;

@interface SCLSchedulingEngine : NSObject {
    NSDate *_lastEvaluationDate;
    NSDate *_nextEvaluationDate;
}

@property (retain, nonatomic) SCLSchedulingParameters *schedulingParameters;
@property (weak, nonatomic) id<SCLSchedulingEngineDelegate> delegate;
@property (readonly, nonatomic) SCLState *state;
@property (readonly, nonatomic) NSDate *lastEvaluationDate;
@property (readonly, nonatomic) NSDate *nextEvaluationDate;

- (void).cxx_destruct;
- (BOOL)_evaluateChangeFromParameters:(id)a0 toParameters:(id)a1;
- (id)initWithParametersBlock:(id /* block */)a0 shouldStartManuallyActive:(BOOL)a1;
- (void)reevaluateStateAtDate:(id)a0;
- (void)updateParametersWithBlock:(id /* block */)a0;

@end
