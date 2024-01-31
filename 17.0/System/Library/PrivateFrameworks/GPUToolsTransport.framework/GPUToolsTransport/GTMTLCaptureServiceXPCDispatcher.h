@class GTURLAccessProviderXPCProxy;
@protocol GTMTLCaptureService;

@interface GTMTLCaptureServiceXPCDispatcher : GTXPCDispatcher <GTMTLCaptureServiceXPCDispatcher> {
    id<GTMTLCaptureService> _implInstance;
    GTURLAccessProviderXPCProxy *_urlService;
}

- (void).cxx_destruct;
- (void)broadcastDisconnect:(id)a0 replyConnection:(id)a1;
- (void)deregisterObserver_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1 notifyConnection:(id)a2;
- (void)nextRequestID:(id)a0 replyConnection:(id)a1;
- (void)query_:(id)a0 replyConnection:(id)a1;
- (void)registerObserver_:(id)a0 replyConnection:(id)a1;
- (void)startWithDescriptor_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)stop:(id)a0 replyConnection:(id)a1;
- (void)update_:(id)a0 replyConnection:(id)a1;

@end
