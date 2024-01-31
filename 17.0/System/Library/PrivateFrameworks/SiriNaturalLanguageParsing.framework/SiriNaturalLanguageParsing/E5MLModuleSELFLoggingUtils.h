@interface E5MLModuleSELFLoggingUtils : NSObject

+ (void)emitEvent:(id /* block */)a0;
+ (void)emitEventMilAssetAcquisition:(id)a0 milAssetAcquisitionContextBuilder:(id /* block */)a1;
+ (void)logMilCompilationFailed:(id)a0 acquisitionType:(int)a1 errorCode:(int)a2 errorMessage:(id)a3;
+ (id)_buildMetadataWithNlId:(id)a0;
+ (id)_buildMetadataWithNlId:(id)a0 andWithTrpId:(id)a1 andWithResultCandidateId:(id)a2;
+ (id)_generateRandomUUID;
+ (void)emitEventMilAssetAcquisitionWithMetadata:(id)a0 milAssetAcquisitionContextBuilder:(id /* block */)a1;
+ (void)logMilCompilationEnded:(id)a0 acquisitionType:(int)a1;
+ (void)logMilCompilationEndedWithMetadata:(id)a0 contextId:(id)a1 acquisitionType:(int)a2;
+ (void)logMilCompilationFailedWithMetadata:(id)a0 contextId:(id)a1 acquisitionType:(int)a2 errorCode:(int)a3 errorMessage:(id)a4;
+ (id)logMilCompilationStarted;
+ (id)logMilCompilationStartedWithMetadata:(id)a0;

@end
