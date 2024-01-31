@class NSString, SiriAnalyticsClientMessageStream, SiriAnalyticsMetadataExtractor, SiriAnalyticsClockInactivityScheduler, SiriAnalyticsSensitiveConditionsObservers, SiriAnalyticsInternalTelemetry, SiriAnalyticsPreprocessor, SiriAnalyticsMetastore;

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate> {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsClientMessageStream *_clientMessageStream;
    SiriAnalyticsPreprocessor *_preprocessor;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsClockInactivityScheduler *_inactivityScheduler;
    SiriAnalyticsMetadataExtractor *_metadataExtractor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)whiteRose:(id)a0 rootClockDestroyed:(id)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithInternalTelemetry:(id)a0 sensitiveConditionsObservers:(id)a1 clientMessageStream:(id)a2 preprocessor:(id)a3 metastore:(id)a4 scheduler:(id)a5 metadataExtractor:(id)a6;
- (void)whiteRose:(id)a0 rootClockCreated:(id)a1;
- (void)_triggerSiriAccountInformation;
- (void).cxx_destruct;
- (void)whiteRose:(id)a0 willCreateRootClock:(id)a1 completion:(id /* block */)a2;
- (void)_triggerDeviceFixedContextOnStreamUUID:(id)a0;
- (void)whiteRose:(id)a0 derivativeClockCreated:(id)a1 rootClock:(id)a2;

@end
