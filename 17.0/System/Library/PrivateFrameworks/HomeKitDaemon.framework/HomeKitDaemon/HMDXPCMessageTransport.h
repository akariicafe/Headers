@class NSMutableDictionary, HMDXPCMessageCountTracker, NSDictionary, NSObject, HMXPCMessageTransportConfiguration, NSString, HMDXPCClientConnectionFactory, NSMutableSet, NSArray, NSXPCListener, NSXPCInterface, HMDProcessMonitor;
@protocol OS_dispatch_queue;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    HMDXPCMessageCountTracker *_xpcCounterTracker;
    NSMutableDictionary *_cachedResponses;
}

@property (class, readonly) HMDXPCMessageTransport *defaultTransport;
@property (class, readonly) HMDXPCMessageTransport *accessorySetupTransport;

@property (readonly) NSXPCListener *listener;
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (readonly) HMDXPCClientConnectionFactory *clientConnectionFactory;
@property (readonly, copy) NSDictionary *activeRequests;
@property (readonly) HMDProcessMonitor *processMonitor;
@property (readonly, copy) NSArray *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)dumpState;
- (void)stop;
- (id)logIdentifier;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_reportCompletion:(id)a0;
- (void)cacheResponsesForMessageWithIdentifier:(id)a0 transport:(id)a1 reportContext:(id)a2;
- (id)__retrieveAndClearMessagesForCachedResponseEntry:(id)a0;
- (void)cacheResponseMessage:(id)a0;
- (id)initWithConfiguration:(id)a0 listener:(id)a1 clientConnectionFactory:(id)a2;
- (void)reportCompletionForMessageWithIdentifier:(id)a0;
- (id)retrieveAndClearMessagesForRequestInfo:(id)a0;
- (void)submitCounters;

@end
