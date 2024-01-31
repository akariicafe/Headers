@interface WidgetRenderer.WidgetRendererClient : NSObject <WRWidgetRendererServiceXPCClient> {
    void /* unknown type, empty encoding */ _calloutQueue;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_subscriptions;
    void /* unknown type, empty encoding */ _calloutQueue_extensionsDidChangePublisher;
    void /* unknown type, empty encoding */ extensionsDidChangePublisher;
    void /* unknown type, empty encoding */ hasReceivedInitializationPayload;
    void /* unknown type, empty encoding */ _lock_extensionsByExtensionIdentity;
    void /* unknown type, empty encoding */ _calloutQueue_configurationsDidChangePublisher;
    void /* unknown type, empty encoding */ configurationsDidChangePublisher;
    void /* unknown type, empty encoding */ _lock_configurationsByHostIdentifier;
    void /* unknown type, empty encoding */ _lock_hasReceivedInitialEnvironment;
    void /* unknown type, empty encoding */ _calloutQueue_systemEnvironmentDidChangePublisher;
    void /* unknown type, empty encoding */ systemEnvironmentDidChangePublisher;
    void /* unknown type, empty encoding */ _lock_systemEnvironment;
    void /* unknown type, empty encoding */ _queue_timelines;
    void /* unknown type, empty encoding */ _calloutQueue_timelineReloadedPublisher;
    void /* unknown type, empty encoding */ timelineReloadedPublisher;
    void /* unknown type, empty encoding */ _queue_snapshots;
    void /* unknown type, empty encoding */ _calloutQueue_snapshotReloadedPublisher;
    void /* unknown type, empty encoding */ snapshotReloadedPublisher;
    void /* unknown type, empty encoding */ _queue_placeholders;
    void /* unknown type, empty encoding */ _calloutQueue_placeholderReloadedPublisher;
    void /* unknown type, empty encoding */ placeholderReloadedPublisher;
}

- (void)flushPowerlog;
- (void)clientConfigurationsDidChange:(id)a0 forHost:(id)a1;
- (void)extensionsDidChange:(id)a0;
- (void)initializeConnection:(id)a0;
- (void)placeholdersDidChange:(id)a0;
- (void)snapshotsDidChange:(id)a0;
- (void)systemEnvironmentDidChange:(id)a0;
- (void)timelinesDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
