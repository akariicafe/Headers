@class _TtC13SiriAnalytics27SiriAnalyticsMessageStaging, SiriAnalyticsWhiteRose, NSObject, AssistantSiriAnalyticsClockWatcher, AssistantSiriAnalyticsMessageTailing, SiriAnalyticsPreferences, SiriAnalyticsPreprocessor, SiriAnalyticsFBFStorage, SiriAnalyticsLargeMessageStorage, SiriAnalyticsSensitiveConditionsObservers, SiriAnalyticsMessageProcessingStrategy, SiriAnalyticsMessageStore, SiriAnalyticsInternalTelemetry, SiriAnalyticsMetastore, SiriAnalyticsXPCServiceListener, SiriAnalyticsMessageResolutionPipeline, SiriAnalyticsClockInactivityScheduler;
@protocol OS_dispatch_queue, SiriAnalyticsServiceHostDelegate;

@interface AssistantSiriAnalyticsService : NSObject <SiriAnalyticsSensitiveConditionsObserverDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsServiceHostDelegate> _delegate;
    SiriAnalyticsXPCServiceListener *_siriAnalyticsListener;
    SiriAnalyticsMessageProcessingStrategy *_messageProcessingStrategy;
    SiriAnalyticsLargeMessageStorage *_largeMessageStorage;
    SiriAnalyticsWhiteRose *_whiteRose;
    SiriAnalyticsMessageResolutionPipeline *_messageResolutionPipeline;
    AssistantSiriAnalyticsClockWatcher *_clockWatcher;
    SiriAnalyticsPreferences *_preferences;
    AssistantSiriAnalyticsMessageTailing *_messageTailing;
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsPreprocessor *_preprocessor;
    SiriAnalyticsFBFStorage *_fbf;
    _TtC13SiriAnalytics27SiriAnalyticsMessageStaging *_messageStaging;
    SiriAnalyticsMessageStore *_messageStore;
    SiriAnalyticsClockInactivityScheduler *_inactivityScheduler;
    BOOL _killSwitchEnabled;
}

- (void)_bootstrapStorageOnQueue;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_buildDependenciesWithCompletion:(id /* block */)a0;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1;
- (void)handler:(id)a0 resetLogicalClockWithCompletion:(id /* block */)a1;
- (void)handler:(id)a0 sensitiveCondition:(int)a1 startedAt:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)handler:(id)a0 setKillSwitchEnabled:(BOOL)a1 completion:(id /* block */)a2;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1;
- (void)_bootstrapStorageWithCompletion:(id /* block */)a0;
- (BOOL)_analyticsEnabled;
- (void)_setupMaintenanceWorkWithCompletion:(id /* block */)a0;
- (void)registerMessageResolver:(id)a0;
- (void)handler:(id)a0 sensitiveCondition:(int)a1 endedAt:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)handler:(id)a0 fetchStateForPluginName:(id)a1 completion:(id /* block */)a2;
- (void)handler:(id)a0 saveState:(id)a1 forPluginName:(id)a2 completion:(id /* block */)a3;
- (void)handler:(id)a0 fetchKillSwitchWithCompletion:(id /* block */)a1;
- (void)handler:(id)a0 unresolvedMessagesReceived:(id)a1;
- (void)_setupMaintenanceWorkOnQueueWithCompletion:(id /* block */)a0;
- (void)sensitiveConditionRangesForBootSessionUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handler:(id)a0 createTag:(id)a1 completion:(id /* block */)a2;
- (void)_setupIncomingConnections;
- (void)handler:(id)a0 vendSandboxExtensionWithResource:(long long)a1 readonly:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)registerSensitiveConditionsObserver:(id)a0;
- (id)_getPreprocessor;
- (void)_buildDependenciesOnQueue;
- (void)handler:(id)a0 fetchLogicalClocks:(id /* block */)a1;
- (void)handler:(id)a0 messagesReceived:(id)a1;
- (void)handler:(id)a0 fetchSensitiveConditionSpans:(id /* block */)a1;
- (void)handler:(id)a0 fetchTags:(id /* block */)a1;
- (void)handler:(id)a0 unorderedMessagesReceived:(id)a1;
- (void)handler:(id)a0 largeMessageReceivedWithPath:(id)a1 messageWrapper:(id)a2 completion:(id /* block */)a3;

@end
