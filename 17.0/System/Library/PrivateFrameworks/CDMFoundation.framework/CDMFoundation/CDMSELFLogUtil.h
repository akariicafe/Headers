@interface CDMSELFLogUtil : NSObject

+ (int)stringXPCSystemEventTypeToEnum:(id)a0;
+ (BOOL)cdmAllServicesSetupEnded:(id)a0 logMessage:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)cdmAllServicesSetupFailed:(id)a0 logMessage:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)cdmAllServicesSetupStarted:(id)a0 logMessage:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)cdmAssetSetupEnded:(id)a0 contextId:(id)a1 logMessage:(id)a2 dataDispatcherContext:(id)a3;
+ (BOOL)cdmAssetSetupFailed:(id)a0 contextId:(id)a1 errorDomain:(int)a2 errorCode:(unsigned int)a3 logMessage:(id)a4 dataDispatcherContext:(id)a5;
+ (BOOL)cdmAssetSetupStarted:(id)a0 contextId:(id)a1 serviceNames:(id)a2 logMessage:(id)a3 dataDispatcherContext:(id)a4;
+ (BOOL)cdmAssetsReported:(id)a0 metadata:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)cdmClientSetupEnded:(id)a0 logMessage:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)cdmClientSetupFailed:(id)a0 errorDomain:(int)a1 errorCode:(unsigned int)a2 logMessage:(id)a3;
+ (BOOL)cdmClientSetupFailed:(id)a0 errorDomain:(int)a1 errorCode:(unsigned int)a2 logMessage:(id)a3 dataDispatcherContext:(id)a4;
+ (BOOL)cdmClientSetupStarted:(id)a0 logMessage:(id)a1 currentServiceGraph:(int)a2 dataDispatcherContext:(id)a3;
+ (BOOL)cdmEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2 machAbsoluteTime:(unsigned long long)a3 dataDispatcherContext:(id)a4;
+ (BOOL)cdmFailed:(int)a0 errorDomainString:(id)a1 errorCode:(int)a2 metadata:(id)a3 logMessage:(id)a4 dataDispatcherContext:(id)a5;
+ (BOOL)cdmFailed:(int)a0 metadata:(id)a1 logMessage:(id)a2 dataDispatcherContext:(id)a3;
+ (BOOL)cdmSetupMissingAssetsDetected:(id)a0 contextId:(id)a1 serviceNames:(id)a2 logMessage:(id)a3 dataDispatcherContext:(id)a4;
+ (BOOL)cdmStarted:(id)a0 metadata:(id)a1 logMessage:(id)a2 machAbsoluteTime:(unsigned long long)a3 currentServiceGraph:(int)a4 dataDispatcherContext:(id)a5;
+ (BOOL)cdmXpcProcessingEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2 dataDispatcherContext:(id)a3;
+ (BOOL)cdmXpcProcessingFailed:(id)a0 reason:(int)a1 errorCode:(unsigned int)a2 metadata:(id)a3 logMessage:(id)a4 dataDispatcherContext:(id)a5;
+ (BOOL)cdmXpcProcessingStarted:(id)a0 xpcType:(int)a1 xpcSystemEventType:(int)a2 serviceName:(int)a3 metadata:(id)a4 logMessage:(id)a5 dataDispatcherContext:(id)a6;
+ (BOOL)contextUpdateEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2 dataDispatcherContext:(id)a3;
+ (id)convertNLAssetToSISchemaAsset:(id)a0 nlAsset:(id)a1;
+ (id)createSELFMetadataWithNlId:(id)a0 andWithTrpId:(id)a1 andWithResultCandidateId:(id)a2 andWithConnectionId:(id)a3;
+ (id)createSELFMetadataWithRequestId:(id)a0;
+ (BOOL)curareRequestLink:(id)a0 nlId:(id)a1 metadata:(id)a2 logMessage:(id)a3 dataDispatcherContext:(id)a4;
+ (BOOL)emitCurareContext:(id)a0 metadata:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1 machAbsoluteTime:(unsigned long long)a2 dataDispatcherContext:(id)a3;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1 machAbsoluteTime:(unsigned long long)a2 logLevel:(id)a3;
+ (BOOL)emitEventsFromContainer:(id)a0 mainEventLogMessage:(id)a1 machAbsoluteTime:(unsigned long long)a2 logLevel:(id)a3 dataDispatcherContext:(id)a4;
+ (BOOL)emitNLXRequestLink:(id)a0 logMessage:(id)a1 dataDispatcherContext:(id)a2;
+ (BOOL)emitRequestLink:(id)a0 metadata:(id)a1 dataDispatcherContext:(id)a2;
+ (id)getAssetNameWithLocaleSuffix:(id)a0 locale:(id)a1;
+ (int)getLocaleForAsset:(id)a0;
+ (unsigned char)getSampleRateForEvent:(id)a0;
+ (id)getVersionForAsset:(id)a0;
+ (BOOL)isEventSampledForEmission:(id)a0;
+ (BOOL)matchingSpanEnded:(id)a0 metadata:(id)a1 logMessage:(id)a2 dataDispatcherContext:(id)a3;
+ (id)mintRequestIdAndCreateSELFMetadataWithRequestId;
+ (BOOL)orchestratorRequestLink:(id)a0 nlId:(id)a1 metadata:(id)a2 logMessage:(id)a3 dataDispatcherContext:(id)a4;
+ (int)stringNodeNameToEnum:(id)a0;
+ (int)stringServiceTypeToEnum:(id)a0;
+ (BOOL)tokenizationEnded:(id)a0 inputType:(int)a1 metadata:(id)a2 logMessage:(id)a3 dataDispatcherContext:(id)a4;
+ (BOOL)tokenizationEndedWithMultiResponses:(id)a0 inputType:(int)a1 metadata:(id)a2 logMessage:(id)a3 dataDispatcherContext:(id)a4;

@end
