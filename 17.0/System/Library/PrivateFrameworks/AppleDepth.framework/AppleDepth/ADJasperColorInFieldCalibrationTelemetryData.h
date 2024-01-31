@interface ADJasperColorInFieldCalibrationTelemetryData : NSObject {
    unsigned int _telemetryVersion;
}

@property (readonly) unsigned long long lastExecutionTime;
@property (readonly) unsigned long long validPointsSum;
@property (readonly) unsigned long long validPointsSumEventsCount;
@property (readonly) unsigned long long maxBackEndRunTime;
@property (readonly) unsigned long long minBackEndRunTime;
@property (readonly) unsigned long long timeSincePrevRun;
@property (readonly) unsigned long long totalBackEndTime;
@property (readonly) unsigned long long frontEndTime;
@property (readonly) unsigned long long totalNumRuns;
@property (readonly) unsigned int largeRotationStatusBits;
@property unsigned long long lastToleranceDetectedTime;

- (id)init;
- (void)reset;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)persistenceData;
- (float)getAverageNumValidPoints;
- (void)increaseRunTimesByOne;
- (void)reportBackendRunTime:(unsigned long long)a0;
- (void)reportFrontendRunTime:(unsigned long long)a0;
- (void)updateLargeRotationStatusBits:(unsigned int)a0;
- (void)updateLastExecutionTime:(unsigned long long)a0;
- (void)updateValidPointsSum:(unsigned long long)a0;

@end
