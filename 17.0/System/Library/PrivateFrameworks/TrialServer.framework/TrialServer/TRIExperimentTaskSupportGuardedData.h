@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIExperimentTaskSupportGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
    BOOL logAsV1Rollout;
}

- (void).cxx_destruct;

@end
