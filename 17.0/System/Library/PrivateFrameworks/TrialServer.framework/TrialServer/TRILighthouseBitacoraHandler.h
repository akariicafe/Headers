@interface TRILighthouseBitacoraHandler : NSObject

+ (BOOL)donateTrialIdentifiers:(id)a0 eventType:(unsigned char)a1 succeeded:(BOOL)a2 error:(id *)a3;
+ (BOOL)emitBMLTEventWithBMLTId:(id)a0 deploymentId:(int)a1 eventType:(unsigned char)a2 succeeded:(BOOL)a3;
+ (BOOL)emitShadowEvaluationEventWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2 eventType:(unsigned char)a3 succeeded:(BOOL)a4;

@end
