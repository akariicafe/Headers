@class BSProcessHandle, BSServiceConnection, NSObject;
@protocol OS_xpc_object;

@interface AXMultiplexConnectionHandler : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) id /* block */ xpc_handler;
@property (retain, nonatomic) BSProcessHandle *processHandle;
@property (retain, nonatomic) BSServiceConnection *serviceConnection;

- (int)pid;
- (struct { unsigned int x0[8]; })auditToken;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
