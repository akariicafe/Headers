@class NSString;

@interface REClockFaceMetricsSubmitter : NSObject <RERelevanceEngineMetricsRecorder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordCallibrationCurveMetrics:(id)a0 forInteraction:(id)a1;
- (void)recordTrainingMetrics:(id)a0 forInteraction:(id)a1;
- (BOOL)_runningInClockFace;
- (BOOL)_runningInTest;
- (BOOL)_shouldRecordMetrics;

@end
