@interface _TtC10ChronoCoreP33_2559684BF6D015C60DA4DF344EC1B12920ChronoServicesClient : NSObject <CHSChronoWidgetServiceServerInterface> {
    void /* unknown type, empty encoding */ _server;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ timelineService;
    void /* unknown type, empty encoding */ taskService;
    void /* unknown type, empty encoding */ descriptorService;
    void /* unknown type, empty encoding */ enablementProvider;
    void /* unknown type, empty encoding */ deviceService;
    void /* unknown type, empty encoding */ extensionService;
    void /* unknown type, empty encoding */ hostService;
    void /* unknown type, empty encoding */ keybagStateProvider;
    void /* unknown type, empty encoding */ powerlogSuggestionService;
    void /* unknown type, empty encoding */ duetService;
    void /* unknown type, empty encoding */ keepAliveAssertionProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ widgetHostIdentities;
    void /* unknown type, empty encoding */ tasks;
    void /* unknown type, empty encoding */ widgetFetchSubscriptions;
    void /* unknown type, empty encoding */ widgetTimelineLoadSubscriptions;
    void /* unknown type, empty encoding */ widgetTimelineLoadActionResponders;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ serviceAssertionIDs;
    void /* unknown type, empty encoding */ serviceAssertions;
    void /* unknown type, empty encoding */ wantsIntents;
}

- (void)flushPowerlog;
- (id)init;
- (void)fetchDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)widgetEnvironmentDataForBundleIdentifier:(id)a0;
- (void)reloadDescriptorsForContainerBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToRemoteDevices:(id /* block */)a0;
- (BOOL)reloadRemoteWidgetsWithError:(id *)a0;
- (void)getAppIntentsXPCListenerEndpointForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)a0 info:(id)a1;
- (void)pairDeviceWith:(id)a0 completion:(id /* block */)a1;
- (void)subscribeToRelevanceEntries:(id /* block */)a0;
- (void)setActivationState:(id)a0 forWidgetHostWithIdentifier:(id)a1;
- (BOOL)unpairDeviceWith:(id)a0 error:(id *)a1;
- (void)loadSuggestedWidget:(id)a0 metrics:(id)a1 stackIdentifier:(id)a2 reason:(id)a3 completion:(id /* block */)a4;
- (void)suggestionBudgetsForStackIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)subscribeToExtensionsIncludingIntents:(id)a0 completion:(id /* block */)a1;
- (void)setWidgetConfiguration:(id)a0 activationState:(id)a1 forWidgetHostWithIdentifier:(id)a2;
- (void)reloadTimeline:(id)a0 error:(id *)a1;
- (id)acquireKeepAliveAssertionForExtensionBundleIdentifier:(id)a0 reason:(id)a1 error:(id *)a2;
- (void)performDescriptorDiscoveryForHost:(id)a0;
- (void)removeWidgetHostWithIdentifier:(id)a0;
- (BOOL)remoteWidgetsEnabled;
- (void)allWidgetConfigurationsByHostWithCompletion:(id /* block */)a0;
- (id)allPairedDevices;
- (BOOL)toggleRemoteWidgetsEnabled:(id)a0 error:(id *)a1;

@end
