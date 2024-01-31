@interface SNLPSSUSELFLoggingUtils : NSObject

+ (void)emitEvent:(id /* block */)a0;
+ (id)buildMetadataFromRequestId:(id)a0;
+ (id)buildMetadataWithNlId:(id)a0 andWithTrpId:(id)a1 andWithResultCandidateId:(id)a2;
+ (void)emitEventBackgroundUpdate:(id)a0 backgroundUpdateContextBuilder:(id /* block */)a1;
+ (void)emitEventUserRequest:(id)a0 userRequestContextBuilder:(id /* block */)a1;
+ (id)generateRandomUUID;
+ (void)logBackgroundUpdateEnded:(id)a0 locale:(id)a1 appInfos:(id)a2;
+ (void)logBackgroundUpdateFailed:(id)a0;
+ (id)logBackgroundUpdateStarted:(int)a0;
+ (void)logUserRequestEnded:(id)a0 triggeredCacheEntryInfos:(id)a1;
+ (void)logUserRequestFailed:(id)a0;
+ (void)logUserRequestStarted:(id)a0;

@end
