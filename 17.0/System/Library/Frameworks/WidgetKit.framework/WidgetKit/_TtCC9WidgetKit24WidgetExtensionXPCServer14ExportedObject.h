@interface _TtCC9WidgetKit24WidgetExtensionXPCServer14ExportedObject : NSObject <WidgetKit.HostToExtensionXPCInterface> {
    void /* unknown type, empty encoding */ previewAgent;
    void /* unknown type, empty encoding */ urlHandlers;
    void /* unknown type, empty encoding */ xpcConnection;
    void /* unknown type, empty encoding */ _queue;
}

- (void)getActivitiesWithRequests:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)handleURLSessionEventsFor:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)getPlaceholdersWithRequests:(id)a0 completion:(id /* block */)a1;
- (void)getAllCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(id /* block */)a0;
- (void)getTimelinesWithRequests:(id)a0 isPreview:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)performCleanup;
- (void)getCurrentDescriptorsWithCompletion:(id /* block */)a0;
- (void)attachPreviewAgentWithFrameworkPath:(id)a0 endpoint:(id)a1 handler:(id /* block */)a2;

@end
