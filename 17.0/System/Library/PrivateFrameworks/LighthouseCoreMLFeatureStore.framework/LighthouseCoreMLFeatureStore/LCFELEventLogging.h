@interface LCFELEventLogging : NSObject

+ (BOOL)emitChangePointDetectionEvent:(id)a0;
+ (BOOL)emitFeatureImportanceEvent:(id)a0;
+ (BOOL)emitModelTrainingEvent:(id)a0;
+ (BOOL)emitShadowEvaluationEvent:(id)a0;

@end
