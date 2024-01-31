@interface ADPearlColorInFieldCalibrationTelemetryData : NSObject {
    unsigned int _telemetryVersion;
}

@property (readonly) unsigned long long lastExecutionTime;
@property (readonly) unsigned long long maxBackendRunTime;
@property (readonly) unsigned long long minBackendRunTime;
@property (readonly) unsigned long long timeSincePrevRun;
@property (readonly) unsigned long long totalBackendTime;
@property (readonly) unsigned long long frontEndTime;
@property (readonly) unsigned long long totalNumRuns;
@property (readonly) unsigned int largeRotationStatusBits;
@property unsigned long long lastToleranceDetectedTime;

- (id)init;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)persistenceData;
- (void)increaseRunTimesByOne;
- (void)reportBackendRunTime:(unsigned long long)a0;
- (void)reportFrontendRunTime:(unsigned long long)a0;
- (void)updateLargeRotationStatusBits:(unsigned int)a0;
- (void)updateLastExecutionTime:(unsigned long long)a0;

@end
