@class NSString, NSDate;

@interface MLRTrialTaskSchedulingPolicy : NSObject

@property (readonly, nonatomic) unsigned long long maxPerformCount;
@property (readonly, nonatomic) double minInterval;
@property (readonly, nonatomic) NSDate *startAfterDate;
@property (readonly, nonatomic) NSDate *endAtDate;
@property (readonly, nonatomic) NSString *taskID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTRIMLRuntimeEvaluation:(id)a0;
- (id)initWithMaxEvaluations:(unsigned long long)a0 periodicIntervalSeconds:(double)a1 startAfterDate:(id)a2 endAtDate:(id)a3 taskID:(id)a4;

@end
