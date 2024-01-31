@class NSXPCListenerEndpoint, NSString, NSXPCConnection;
@protocol INIntentResponseObserver;

@interface INStartSendingUpdatesForwardingAction : INIntentForwardingAction <BSXPCSecureCoding>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) id<INIntentResponseObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseClass;
+ (BOOL)supportsBSXPCSecureCoding;

- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIntent:(id)a0 endpoint:(id)a1 observer:(id)a2;
- (id)initWithIntent:(id)a0 endpointProvider:(id)a1 observer:(id)a2;

@end
