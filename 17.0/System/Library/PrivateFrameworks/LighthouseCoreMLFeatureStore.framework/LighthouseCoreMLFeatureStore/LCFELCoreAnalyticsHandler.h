@interface LCFELCoreAnalyticsHandler : NSObject

+ (BOOL)emitChangePointDetectionEvent:(id)a0;
+ (BOOL)emitFeatureImportanceEvent:(id)a0;
+ (BOOL)emitFeatureStatisticEvents:(id)a0 usageType:(long long)a1 batchProviderInfo:(id)a2;
+ (BOOL)emitModelTrainingEvent:(id)a0;
+ (BOOL)emitShadowEvaluationEvent:(id)a0;
+ (void)myAnalyticsSendEvent:(id)a0 eventPayload:(id)a1;

@end
