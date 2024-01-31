@protocol GTURLAccessProvider;

@interface GTURLAccessProviderXPCDispatcher : GTXPCDispatcher <GTURLAccessProviderXPCDispatcher> {
    id<GTURLAccessProvider> _service;
}

- (void).cxx_destruct;
- (void)transferIdentifier_toDevice_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)copyIdentifier_toDevice_completionHandler_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)makeURL_:(id)a0 replyConnection:(id)a1;
- (void)securityScopedURLFromSandboxID_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)urlForPath_:(id)a0 replyConnection:(id)a1;

@end
