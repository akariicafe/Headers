@interface TRITaskUtils : NSObject

+ (void)updateBMLTHistoryDatabaseWithAllocationStatus:(unsigned char)a0 forBMLT:(id)a1 deployment:(int)a2 fps:(id)a3 bmltRecord:(id)a4 context:(id)a5;
+ (id)_bmltStateForAnalyticsFromStatusType:(unsigned char)a0;
+ (void)updateRolloutHistoryDatabaseWithAllocationStatus:(unsigned char)a0 forRollout:(id)a1 ramp:(id)a2 deployment:(int)a3 fps:(id)a4 namespaces:(id)a5 telemetryMetric:(id)a6 rolloutRecord:(id)a7 isBecomingObsolete:(BOOL)a8 context:(id)a9;
+ (id)_experimentStateForAnalyticsFromInternalState:(unsigned char)a0;
+ (BOOL)updateExperimentHistoryDatabaseWithAllocationStatus:(unsigned char)a0 forExperiment:(id)a1 treatment:(id)a2 deployment:(int)a3 experimentRecord:(id)a4 isBecomingObsolete:(BOOL)a5 context:(id)a6;
+ (id)_rolloutStateForAnalyticsFromInternalState:(unsigned char)a0;
+ (void)addAttribution:(id)a0 toTaskTags:(id)a1;

@end
