@interface PLStorageOperator : PLOperator

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventForwardDefinitionSubmissionTag;

- (void)logEventPointPLLog:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)log;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)initOperatorDependancies;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;

@end
