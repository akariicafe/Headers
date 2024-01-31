@class NSString, MLPredictionEventMetric, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface MLPredictionEvent : NSObject {
    NSObject<OS_dispatch_queue> *_predictionEventQueue;
    long long _featuresPredictionCountSoFar;
    unsigned long long _epochIndex;
    MLPredictionEventMetric *_lastReportedMetric;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSNumber *firstPartyExecutable;
@property (copy, nonatomic) NSNumber *modelType;

- (id)init;
- (void).cxx_destruct;
- (void)maybeLogPredictionEvent:(unsigned long long)a0;
- (id)lastReportedMetric;

@end
