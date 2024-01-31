@class NSString, NSXPCConnection;

@interface SecuritydXPCClient : NSObject <SecuritydXPCClientInterface>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureSecuritydXPCProtocol:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initTargetingSession:(int)a0;
- (void).cxx_destruct;
- (id)protocolWithSync:(BOOL)a0 errorHandler:(id /* block */)a1;

@end
