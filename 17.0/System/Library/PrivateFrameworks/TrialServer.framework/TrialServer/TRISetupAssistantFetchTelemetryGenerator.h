@class NSArray;

@interface TRISetupAssistantFetchTelemetryGenerator : NSObject {
    long long _latencyMilliseconds;
    NSArray *_telemetry;
}

- (id)rolloutSystemTelemetry;
- (void).cxx_destruct;
- (id)latencyMetric;
- (id)initWithDeadlineTimestamp:(id)a0 referenceDate:(id)a1 existingTelemetry:(id)a2;

@end
