@interface PreviewsInjection.UVControlAgent : NSObject <UVAgentControlServiceProtocol> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostMessagePipeAgent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shellMessagePipeAgent;
    void /* unknown type, empty encoding */ activeSecurityScopedURLs;
}

- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)connectHostMessagePipeWithEndpoint:(id)a0;
- (void)connectJITWithEndpoint:(id)a0 setupPayload:(id)a1 replyHandler:(id /* block */)a2;
- (void)connectShellMessagePipeWithEndpoint:(id)a0;
- (void)copyURLWithURLWrapperData:(id)a0 reply:(id /* block */)a1;
- (void)createPreviewNonUIAgentWithEndpoint:(id)a0;
- (void)createPreviewSceneAgentWithEndpoint:(id)a0 forSceneIdentifier:(id)a1;
- (void)grantExecutePermissionWithURLWrapperData:(id)a0 reply:(id /* block */)a1;

@end
