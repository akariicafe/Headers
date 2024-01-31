@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIBMLTTaskSupportGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
}

- (void).cxx_destruct;

@end
