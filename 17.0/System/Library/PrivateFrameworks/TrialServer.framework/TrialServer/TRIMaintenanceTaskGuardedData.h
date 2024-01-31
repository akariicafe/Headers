@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIMaintenanceTaskGuardedData : NSObject {
    NSMutableArray *metrics;
    NSMutableArray *dimensions;
    TRITrialSystemTelemetry *trialSystemTelemetry;
}

- (void).cxx_destruct;

@end
