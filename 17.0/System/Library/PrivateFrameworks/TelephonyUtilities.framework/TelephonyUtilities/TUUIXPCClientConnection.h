@class NSString, NSXPCConnection, TUCallCenter, NSObject;
@protocol OS_dispatch_queue;

@interface TUUIXPCClientConnection : NSObject <TUUIXPCClient, TUUIDataSource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) TUCallCenter *callCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ping;
- (void)dealloc;
- (id)host;
- (void).cxx_destruct;
- (void)handleRedialCommandWhileScreening:(id)a0;
- (void)fetchInCallUIState:(id /* block */)a0;
- (id)hostWithErrorHandler:(id /* block */)a0;
- (id)initWithListenerEndpoint:(id)a0 callCenter:(id)a1;
- (void)shouldHostHandleMRCommand:(unsigned int)a0 completion:(id /* block */)a1;
- (void)shouldHostHandleMRCommand:(unsigned int)a0 sourceIdentifier:(id)a1 completion:(id /* block */)a2;

@end
