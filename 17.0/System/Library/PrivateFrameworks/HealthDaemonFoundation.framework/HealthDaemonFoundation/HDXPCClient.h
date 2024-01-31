@class NSXPCConnection, HDXPCProcess;

@interface HDXPCClient : NSObject

@property (readonly) HDXPCProcess *process;
@property (readonly) NSXPCConnection *connection;

+ (id)clientWithConnection:(id)a0 error:(id *)a1;

- (id)initWithProcess:(id)a0;
- (id)_initWithConnection:(id)a0 process:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 process:(id)a1;

@end
