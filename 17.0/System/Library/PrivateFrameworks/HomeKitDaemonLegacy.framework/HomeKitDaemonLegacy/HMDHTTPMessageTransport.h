@class NSString, HMFNetServiceBrowser, NSArray, NSMutableDictionary, NSDictionary, HMDHTTPServerMessageTransport, HMFVersion, NSObject, HMDHTTPDevice, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate, HMDHTTPClientMessageTransportDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
    NSMutableSet *_transientDevices;
    NSMutableDictionary *_txtRecord;
    NSMutableArray *_clientTransports;
}

@property (class, readonly, copy) HMFVersion *protocolVersion;

@property (readonly, nonatomic) HMDHTTPServerMessageTransport *serverTransport;
@property (readonly, nonatomic) HMFNetServiceBrowser *clientBrowser;
@property (readonly, nonatomic) NSArray *clientTransports;
@property (readonly, nonatomic) HMDHTTPDevice *currentDevice;
@property (getter=isServerEnabled) BOOL serverEnabled;
@property (readonly, copy, nonatomic) NSDictionary *TXTRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)restriction;
+ (id)shortDescription;
+ (id)logCategory;
+ (BOOL)protocolVersionSupportsExtendedMessages:(id)a0;
+ (BOOL)shouldHostMessageServer;

- (long long)qualityOfService;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_stopServer;
- (id)shortDescription;
- (void)setCurrentDevice:(id)a0;
- (id)dumpState;
- (id)logIdentifier;
- (void).cxx_destruct;
- (int)transportType;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)netServiceBrowser:(id)a0 didAddService:(id)a1;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1;
- (void)netServiceBrowser:(id)a0 didStopBrowsingWithError:(id)a1;
- (void)removeTXTRecordValueForKey:(id)a0;
- (void)server:(id)a0 didStopWithError:(id)a1;
- (void)setTXTRecordValue:(id)a0 forKey:(id)a1;
- (BOOL)canSendMessage:(id)a0;
- (void)_connectToDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleReceivedRequestMessage:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)_sendMessage:(id)a0 destination:(id)a1 timeout:(double)a2 responseHandler:(id /* block */)a3;
- (id)_serviceForDevice:(id)a0;
- (void)_startServerWithDevice:(id)a0;
- (void)addClientTransport:(id)a0;
- (void)client:(id)a0 didReceiveMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)client:(id)a0 didStopWithError:(id)a1;
- (id)clientTransportForDevice:(id)a0;
- (id)clientTransportForService:(id)a0;
- (void)configureWithDevice:(id)a0;
- (id)deviceForHTTPDevice:(id)a0;
- (void)handleServerEnabled:(BOOL)a0;
- (id)initWithAccountRegistry:(id)a0;
- (id)initWithAccountRegistry:(id)a0 clientBrowser:(id)a1;
- (BOOL)isDeviceConnected:(id)a0;
- (void)removeAllClientTransports;
- (void)removeClientTransport:(id)a0;
- (void)server:(id)a0 didAddDevice:(id)a1;
- (void)server:(id)a0 didReceiveMessage:(id)a1 fromDevice:(id)a2 completionHandler:(id /* block */)a3;
- (void)server:(id)a0 didRemoveDevice:(id)a1;
- (void)setServerTransport:(id)a0;
- (void)startObservingIsPublishingForService:(id)a0;

@end
