@class IMDSyncTelemetryReporterInternal;

@interface IMDSyncTelemetryReporter : NSObject {
    IMDSyncTelemetryReporterInternal *_telemetryReporter;
}

- (id)init;
- (void).cxx_destruct;
- (void)postMessage:(id)a0 category:(long long)a1;

@end
