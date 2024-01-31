@class NSString, NSXPCConnection;

@interface APXPCConnection : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) int processIdentifier;

- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (id)remoteObjectProxy;
- (struct { unsigned int x0[8]; })auditToken;
- (BOOL)hasEntitlement:(id)a0;
- (void).cxx_destruct;

@end
